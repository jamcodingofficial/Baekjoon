'''
 * Author : JC
 * https://www.acmicpc.net/problem/1158
'''

n, k = map(int, input().split())
idx = k-1
l = [i for i in range(1, n+1)]
res = []

while l > 0 :
    idx = idx % len(l) 
    res.append(str(l.pop(idx)))
    idx += k-1 

print('<'+', '.join(res)+'>')