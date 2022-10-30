'''
 * Author : JC
 * https://www.acmicpc.net/problem/9093
'''

t = int(input())

for i in range(t) :
    s = input().split()
    l = []
    for j in s : 
        l.append(''.join(reversed(j)))
    # print(*l) -> [Line 14 ~ 15] 코드를 이렇게 한 줄로 작성해도 된다.
    for i in l :
        print(i, end = ' ')