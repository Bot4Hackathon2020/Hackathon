import pandas as pd

df = pd.read_excel('comments_from_search.xls')		# 使用pandas模块读取数据
print('开始写入txt文件...')
df.to_csv('comment_in_txt', header=None, sep=',', index=False)		# 写入，逗号分隔
print('文件写入成功!')
