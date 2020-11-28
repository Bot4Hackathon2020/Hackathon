# encoding:utf-8
import time
import pandas
import numpy
from aip import AipNlp

app_id = '23058734'
api_key = 'KNmF9FVuCFsWs5i6avRMxL3y'
secret_key = 'GHw0VaMEvGkf1D0YIvHQVCz2DPkgKkN0 '
client = AipNlp(app_id, api_key, secret_key)

text = "高兴"
text2 = ""

# text = re.sub(r'[^\u4e00-\u9fa5]','',text)
#

frame = pandas.read_excel("words.xlsx")
frame = numpy.array(frame)
frame = frame.tolist()

word_list = []

for lst in frame:
    for word in lst:
        if str(word) != 'nan':
            word_list.append(word)


def get_positive_prob(test_word):
    ret = client.sentimentClassify(test_word)
    return ret['items'][0]['positive_prob']

txt = open('dic.txt', 'w')

lst = {}
for word in word_list:
    time.sleep(0.5)
    prob = get_positive_prob(word)
    word = (word, prob)
    print(word, file=txt)


# print(text)
# result = client.sentimentClassify(text)
# result2 = client.sentimentClassify(text2)
# print(result)
# print(result2)
