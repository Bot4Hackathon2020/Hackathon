from importlib import reload
import http.cookiejar as cookielib
import requests
import json
import time

import xlwt
from lxml import etree
import html
import re
from bs4 import BeautifulSoup

agent = 'mozilla/5.0 (windowS NT 10.0; win64; x64) appLewEbkit/537.36 (KHTML, likE gecko) chrome/71.0.3578.98 safari/537.36'
headers = {'User-Agent': agent,
           'Cookie':'SINAGLOBAL=6217752179395.002.1600914294056; UOR=,,cn.bing.com; wvr=6; wb_view_log_7437214458=1280*7201.5; ALF=1638123004; SCF=Aqm1VHQ3SC3LNVdPtXn6bVUFAGTttLxzukbG14QP2bmU-e6Jyini-pr7x28h7fHX-OsuF86HgtuJlhUArDJjihU.; _s_tentry=weibo.com; Apache=4996816229307.703.1606587018158; ULV=1606587019046:5:3:1:4996816229307.703.1606587018158:1606578742089; SSOLoginState=1606588728; SUB=_2A25yxuloDeRhGeFK6FUT8SrIzjSIHXVuSPcgrDV8PUJbkNAfLRmlkW1NQ32C3WQiXiAuHZO0-85AWIA7PsrlE1ZE; SUBP=0033WrSXqPxfM725Ws9jqgMF55529P9D9WFxlNbFrgO3foMe41B-T4ex5NHD95QNSheNeo2XSh-RWs4Dqcjgi--4iK.4iKnRi--4i-iWiK.EMJLoI7tt; webim_unReadCount=%7B%22time%22%3A1606593253350%2C%22dm_pub_total%22%3A0%2C%22chat_group_client%22%3A0%2C%22chat_group_notice%22%3A0%2C%22allcountNum%22%3A0%2C%22msgbox%22%3A0%7D'
           }

def run():
    start_url = "https://m.weibo.cn/comments/hotflow?id=4397315030686217&mid=4397315030686217&max_id_type=0"
    # cookies = cookielib.LWPCookieJar("Cookie.txt")
    # cookies.load(ignore_discard=True, ignore_expires=True)
    # 将cookie转换成字典
    # cookie_dict = requests.utils.dict_from_cookiejar(cookies)
    response = requests.get(start_url, headers)
    comment = response.json()

    max_id = comment["data"]["max_id"]
    comments_ = dfs(comment["data"]["data"])
    comments=[]
    for c in comments_:
        comments.append(c)
    time.sleep(1)

    # print(line)
    print(comments.__len__())


    book = xlwt.Workbook()
    sheet = book.add_sheet('sheet1')
    for i, line in enumerate(comments):
        sheet.write(i, 0, line)
    book.save('comments.xls')

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


if __name__ == '__main__':
    run()
