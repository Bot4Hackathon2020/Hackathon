# encoding:utf-8
to_write_doc = open('dic.txt', 'w')
data = []
for line in open('dic (2).txt', 'r', encoding='UTF-8'):
    try:
        data.append(eval(line[:-1]))
    except:
        print("1")

enlarged_data = []
for (i, j) in data:
    enlarged_data.append((i, j * 1000000))

enlarged_data = sorted(enlarged_data, key=lambda a: a[1], reverse=True)

for d in enlarged_data:
    print(d, file=to_write_doc)
print(enlarged_data)
to_write_doc.close()
