# encoding:utf-8
import matplotlib.pyplot as plt
plt.rcParams['font.sans-serif']=['SimHei'] #用来正常显示中文标签
plt.rcParams['axes.unicode_minus']=False #用来正常显示负号
#有中文出现的情况，需要u'内容'


from aip import AipNlp
import re
import jieba
import jieba.posseg as pseg
import time
import matplotlib.font_manager as fm



def get_positive_prob(test_word):
    app_id = '23058734'
    api_key = 'KNmF9FVuCFsWs5i6avRMxL3y'
    secret_key = 'GHw0VaMEvGkf1D0YIvHQVCz2DPkgKkN0 '
    client = AipNlp(app_id, api_key, secret_key)
    ret = client.sentimentClassify(test_word)
    return ret['items'][0]['positive_prob']


text = """上午还看到学校说处理不了老师，这一上了热搜，马上就处理了，现在讨回公道都要靠舆论了"""

# text = re.sub(r'[^\u4e00-\u9fa5]', '', text)
# words = pseg.cut(text)
# jieba.enable_paddle()
# words = pseg.cut(text, use_paddle=True)
# words = list(words)
# words = [i for (i, j) in words if j in ['a', 'ad', 'vd', 'an']]
# words = set(words)
#
# # positive_prob_standard = get_positive_prob(words)
# words_prob = []
# for word in words:
#     time.sleep(0.5)
#     prob = get_positive_prob(word)
#     words_prob.append(prob * 1000000)
#     # perfect_words = [word for word in words if abs(get_positive_prob(word) - positive_prob_standard) < 0.1]
#
# aver = sum(words_prob) / len(words_prob)



def mainFunction(text):
    aver = get_positive_prob(text) * 1000000

    lst_of_standard_words = []

    for line in open('dic-simplified.txt', 'r'):
        try:
            lst_of_standard_words.append(eval(line[:-1]))
        except:
            print("some error.")

    index = 0

    for i in range(len(lst_of_standard_words) - 1):
    # up =
        if lst_of_standard_words[i + 1][1] < aver < lst_of_standard_words[i][1]:
            index = i
            break

    picture_lst = []
    if index < 3:
        for j in range(4):
            picture_lst.append(lst_of_standard_words[j])
    else:
        picture_lst.append(lst_of_standard_words[index - 2])
        picture_lst.append(lst_of_standard_words[index - 1])
        picture_lst.append(lst_of_standard_words[index - 0])
        picture_lst.append(lst_of_standard_words[index + 1])

    picture_data = []
    picture_label = []
    for i in picture_lst:
        picture_data.append(i[1])
        picture_label.append(i[0])

    explode = [0.1, 0, 0, 0]

# colors = ['paleturquoise', 'aquamarine', 'deepskyblue', 'dodgerblue', 'orange']
    colors = ['deeppink', 'hotpink', 'deepskyblue', 'dodgerblue', 'orange']
    plt.axes(aspect='equal')
    plt.xlim(0, 8)
    plt.ylim(0, 8)

    plt.gca().spines['right'].set_color('none')
    plt.gca().spines['top'].set_color('none')
    plt.gca().spines['left'].set_color('none')
    plt.gca().spines['bottom'].set_color('none')

    plt.pie(x=picture_data,  # 绘制数据
        labels=picture_label,  # 添加编程语言标签
        explode=explode,  # 突出显示Python
        colors=colors,  # 设置自定义填充色
        autopct='%.3f%%',  # 设置百分比的格式,保留3位小数
        pctdistance=0.8,  # 设置百分比标签和圆心的距离
        labeldistance=1.0,  # 设置标签和圆心的距离
        startangle=180,  # 设置饼图的初始角度
        center=(4, 4),  # 设置饼图的圆心(相当于X轴和Y轴的范围)
        radius=3.8,  # 设置饼图的半径(相当于X轴和Y轴的范围)
        counterclock=False,  # 是否为逆时针方向,False表示顺时针方向
        wedgeprops={'linewidth': 1, 'edgecolor': 'green'},  # 设置饼图内外边界的属性值
        textprops={'fontsize': 12, 'color': 'black'},  # 设置文本标签的属性值
        frame=1)  # 是否显示饼图的圆圈,1为显示


    plt.xticks(())
    plt.yticks(())
    plt.savefig('resultPic.jpg')
    plt.show()
# if index <
#     for j in range(index + 1):
#         pic_lst.append(lst_of_standard_words[j])
if __name__ == "__main__":
    mainFunction(text)