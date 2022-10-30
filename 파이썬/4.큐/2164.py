'''
 * Author : JC
 * https://www.acmicpc.net/problem/2164
'''

n = int(input())
l = []
for i in range(n) :
    m = float(input())
    l.append(m)
l.sort()
for i in range(7) :
    print(f'{l[i]:.3f}')