'''
 * Author : JC
 * https://www.acmicpc.net/problem/4948
 '''

l = [True] * 250000
l[1] = False
for i in range(2, 250000) :
    if l[i] == True :
        for j in range(i*2, 250000, i) : 
            l[j] = False

while True :
    n = int(input())
    if n == 0 :
        break
    cnt = 0
    for i in range(n+1, n*2+1) :
        if l[i] == True :
            cnt += 1
    print(cnt)