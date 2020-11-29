import csv
import time

import requests
import json
import re
import jieba
import matplotlib.pyplot as plt
import xlwt
from wordcloud import WordCloud, ImageColorGenerator
import PIL.Image as Image

search = input('请输入关键词:')
page = int(input('请输入需要查找的页数：'))
url = 'https://m.weibo.cn/api/container/getIndex?type=all&queryVal={}&featurecode=20000320&luicode=10000011&lfid=106003type%3D1&title={}&containerid=100103type%3D1%26q%3D{}'.format(
    search, search, search)
'''
def cookie():
    with open('cookie.txt','r') as f:
        cookies={}
        for line in f.read().split(';'):
            name,value=line.strip().split('=',1)
            cookies[name]=value
        return cookies
'''

headers = {
    'User-Agent': 'mozilla/5.0 (windowS NT 10.0; win64; x64) appLewEbkit/537.36 (KHTML, likE gecko) chrome/71.0.3578.98 safari/537.36',
    'Referer': 'https://m.weibo.cn',
    'Connection': 'keep-alive',
    'Cookie': 'SINAGLOBAL=6217752179395.002.1600914294056; UOR=,,cn.bing.com; wvr=6; wb_view_log_7437214458=1280*7201.5; ALF=1638123004; SCF=Aqm1VHQ3SC3LNVdPtXn6bVUFAGTttLxzukbG14QP2bmU-e6Jyini-pr7x28h7fHX-OsuF86HgtuJlhUArDJjihU.; _s_tentry=weibo.com; Apache=4996816229307.703.1606587018158; ULV=1606587019046:5:3:1:4996816229307.703.1606587018158:1606578742089; SSOLoginState=1606588728; SUB=_2A25yxuloDeRhGeFK6FUT8SrIzjSIHXVuSPcgrDV8PUJbkNAfLRmlkW1NQ32C3WQiXiAuHZO0-85AWIA7PsrlE1ZE; SUBP=0033WrSXqPxfM725Ws9jqgMF55529P9D9WFxlNbFrgO3foMe41B-T4ex5NHD95QNSheNeo2XSh-RWs4Dqcjgi--4iK.4iKnRi--4i-iWiK.EMJLoI7tt; webim_unReadCount=%7B%22time%22%3A1606593253350%2C%22dm_pub_total%22%3A0%2C%22chat_group_client%22%3A0%2C%22chat_group_notice%22%3A0%2C%22allcountNum%22%3A0%2C%22msgbox%22%3A0%7D'
}


def dfs(lines):
    comments = []
    for line in lines:
        data = line['text']
        p = re.compile(r'(<span.*>.*</span>)*(<a.*>.*</ a>)?')
        data = p.sub(r'', data)
        if len(data) != 0:
            comments.append(data)
        try:
            sons = dfs(line['comments'])
            for son in sons:
                comments.append(son)
        except Exception:
            pass

    return comments


results = []

links = []
i = 1
b = [1]
weibo = 0
while True:
    if len(b) == 0:
        break
    else:
        url_1 = url + '&page=' + str(i)  # page number
        print(url_1)
        r = requests.get(url_1, headers)
        # r_info=r.json()
        # print(r_info)
        if (r.status_code != 200):
            break
        a = json.loads(r.text)
        b = a['data']['cards']
        i += 1
        if (i > page):
            break
        for j in range(len(b)):
            bb = b[j]
            try:
                for c in bb['card_group']:
                    try:
                        d = c['mblog']
                        link = 'https://m.weibo.cn/api/comments/show?id={}'.format(d['mid'])
                        links.append(link)
                        if d['isLongText'] == False:
                            text = d['text']
                            pattern = re.compile(u"[\u4e00-\u9fa5]+")
                            text = re.findall(pattern, text)
                        else:
                            text = d['longText']['longTextContent']
                        results.append(text)
                        weibo += 1
                    except:
                        continue
            except:
                continue

print('共抓取{}条记录'.format(weibo))

pl = []
for url_2 in links:
    r = requests.get(url_2, headers)
    comment = r.json()
    # max_id = comment["data"]["max_id"]
    comments_ = dfs(comment["data"]["data"])
    comments = []
    for c in comments_:
        comments.append(c)
    time.sleep(1)

    # print(line)
    # print(comments.__len__())

    book = xlwt.Workbook()
    sheet = book.add_sheet('sheet1')
    for i, line in enumerate(comments):
        sheet.write(i, 0, line)
    book.save('comments_from_search.xls')

    a = json.loads(r.text)
    try:
        num = a['data']['total_number']
        j = 0
        for i in range(num // 10 + 1):
            url_3 = url_2 + '&page=' + str(i + 1)
            r = requests.get(url_3, headers).text
            a = json.loads(r)
            b = a['data']
            try:
                c = b['hot_data']
                for i in range(len(c)):
                    d = c[i]['text']
                    pattern = re.compile(u"[\u4e00-\u9fa5]+")
                    d = re.findall(pattern, d)
                    j += 1
                    pl.append(d)
                    print(d)
            except:
                c = b['data']
                for i in range(len(c)):
                    d = c[i]['text']
                    pattern = re.compile(u"[\u4e00-\u9fa5]+")
                    d = re.findall(pattern, d)
                    j += 1
                    pl.append(d)
                    print(d)
        print('%s条评论' % j)
    except:
        print('无评论')


def word_cloud(results, search):
    siglist = []
    for ii in results:
        try:
            signature = ii.strip().replace('http:t.cn', '').replace('的', '').replace('地', '').replace('了', '').replace(
                '是', '').replace('在', '').replace('/', '').replace('emoji', '')
            rep = re.compile('1f\d+\w*|[<>/=]')
            signature = rep.sub('', signature)
            siglist.append(signature)
        except:
            for jj in ii:
                signature = jj.strip().replace('http:t.cn', '').replace('的', '').replace('地', '').replace('了',
                                                                                                          '').replace(
                    '是', '').replace('在', '').replace('/', '').replace('emoji', '')
                rep = re.compile('1f\d+\w*|[<>/=]')
                signature = rep.sub('', signature)
                siglist.append(signature)
    text = ''.join(siglist)

    wordlist = jieba.cut(text, cut_all=True)
    word_space_split = " ".join(wordlist)
    '''
    # coloring=np.array(Image.open("1.jpg"))
    # my_wordcloud=WordCloud(background_color='white',width=2400,height=2400,max_words=2000,
                           mask=coloring,max_font_size=60,
                           random_state=42,scale=2,
                           font_path="simfang.ttf").generate(
                               word_space_split)
    # image_colors=ImageColorGenerator(coloring)
    
    plt.imshow(my_wordcloud.recolor(color_func=image_colors))
    plt.imshow(my_wordcloud)
    plt.axis('off')
    plt.show
    my_wordcloud.to_file('{}.png'.format(search))
    '''
