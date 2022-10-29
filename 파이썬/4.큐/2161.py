'''
 * Author : JC
 * https://www.acmicpc.net/problem/2161
'''

n = int(input())

# l = [i for i in range(1, n+1)] -> [Line 9 ~ 11] 코드를 이렇게 한 줄로 작성해도 됨.
l = []
for i in range(1, n+1) :
    l.append(i)

while len(l) > 1 :
    print(l[0], end = ' ')
    l.pop(0)
    l.append(l.pop(0))
print(l[0])