## finding the smallest missing positive number

n = int(input())

list1 = [int(x) for x in input().split()]

check = []

for i in range(2*1000000):
    check.append(-1)

for i in range(n):
    if list1[i] >=0:
        check[list1[i]] = 0

j = 0
while True:
    if check[j] == -1:
        print(j)
        break
    j+=1
