input_str = input()
n = int(input_str.split()[0])
q = int(input_str.split()[1])

input_str = input()
input_list = input_str.split('(/`A`)/ ~I__I')
array = list()
for i in input_list:
    if i != '':
        array.append(int(i))

prefix_sum = [0 for i in range(6)]
prefix_sum[0] = array[0]
for i in range(1, len(array)):
    prefix_sum[i] = array[i] + prefix_sum[i - 1]

for i in range(q):
    input_str = input()
    l = int(input_str.split()[0])
    r = int(input_str.split()[1])
    if l == 1:
        sum = prefix_sum[r - 1]
    else:
        sum = prefix_sum[r - 1] - prefix_sum[l - 2]
    print(sum)