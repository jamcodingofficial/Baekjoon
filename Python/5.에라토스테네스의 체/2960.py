'''
 * Author : JC
 * https://www.acmicpc.net/problem/2960
 '''

n, k = map(int, input().split())
l = [True] * 1001
cnt = 0

l[1] = False
for i in range(2, n+1) :
    for j in range(i, n+1, i) : 
        if l[j] == True :
            cnt+=1
            if cnt == k :
                print(j)
                exit()
        l[j] = False