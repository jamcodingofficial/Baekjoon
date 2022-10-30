'''
 * Author : JC
 * https://www.acmicpc.net/problem/1929
'''

n, m = map(int, input().split())
l = [True] * 1000001

l[1] = False
for i in range(2, 1000001) :
    if l[i] == True :
        for j in range(i*2, 1000001, i) : 
            l[j] = False

for i in range(n, m+1) :
    if l[i] == True :
        print(i)