'''
 * Author : JC
 * https://www.acmicpc.net/problem/3986
'''

n = int(input())
cnt = 0
for i in range(n) :
    m = input()
    length = len(m) 
    l = [m[0]] # l : A
    for j in range(1, length) :
        if len(l) == 0:
            l.append(m[j])
        else :
            if l[-1] == m[j] :
                l.pop()
            else :
                l.append(m[j])          
    if len(l) == 0:
        cnt += 1
print(cnt)