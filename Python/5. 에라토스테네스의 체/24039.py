'''
 * Author : JC
 * https://www.acmicpc.net/problem/24039
 '''

n = int(input())
l = [True] * 10001

l[1] = False
for i in range(2, 10001) :
    if l[i] == True :
        for j in range(i*2, 10001, i) :
            l[j] = False

res = []
for i in range(1, 10001) :
    if l[i] == True :
        res.append(i)
length = len(res)

for i in range(length-1):
    if res[i] * res[i+1] > n :
        print(res[i] * res[i+1])
        break