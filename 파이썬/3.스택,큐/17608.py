'''
 * Author : JC
 * https://www.acmicpc.net/problem/17608
'''

n = int(input())
l = []
cnt = 1
for i in range(n) :
    m = int(input())
    l.append(m)

l.reverse() 
max = l[0] 
for i in range(1, n) :
    if max < l[i] :
        max = l[i]
        cnt += 1
print(cnt)