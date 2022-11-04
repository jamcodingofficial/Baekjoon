'''
 * Author : JC
 * https://www.acmicpc.net/problem/10845
'''

import sys
input = sys.stdin.readline # 입력 속도를 빠르게 만들기 위해 꼭 쓴다.

n = int(input())
queue = []
for i in range(n) :
    a = input().split()
    if a[0] == 'push' : 
        queue.append(a[1])
    elif a[0] == 'pop' : 
        if len(queue) == 0 :
            print(-1)
        else :
            print(queue[0])
            queue.pop(0)
    elif a[0] == 'size' : 
        print(len(queue))
    elif a[0] == 'empty' :
        if len(queue) == 0 :
            print(1)
        else :
            print(0)
    elif a[0] == 'front' :
        if len(queue) == 0 :
            print(-1)
        else :
            print(queue[0])
    else :
        if len(queue) == 0 :
            print(-1) 
        else :
            print(queue[-1])