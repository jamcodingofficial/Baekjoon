'''
 * Author : JC
 * https://www.acmicpc.net/problem/10773
'''

k = int(input())
l = []
for i in range(k) :
    m = int(input())
    if m == 0 :
        l.pop()
    else :
        l.append(m)

print(sum(l))