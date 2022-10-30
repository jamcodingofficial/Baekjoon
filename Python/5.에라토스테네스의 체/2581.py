'''
 * Author : JC
 * https://www.acmicpc.net/problem/2581
 '''

m = int(input())
n = int(input())
l = [True] * 10001

l[1] = False
for i in range(2, 10001) :
    if l[i] == True :
        for j in range(i*2, 10001, i) : 
            l[j] = False

res = []
for i in range(m, n+1) :
    if l[i] == True and i >= m and i <= n:
        res.append(i)

if len(res) != 0 :
    print(sum(res))
    print(min(res))
else :
    print(-1)