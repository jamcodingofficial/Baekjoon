'''
 * Author : JC
 * https://www.acmicpc.net/problem/10828
'''

import sys
input = sys.stdin.readline # 입력 속도를 빠르게 만들기 위해 꼭 쓴다.

n = int(input())
stack = []
for i in range(n) :
    a = input().split()
    if a[0] == 'push' : 
        stack.append(a[1])
    elif a[0] == 'pop' : 
        if len(stack) == 0 :
            print(-1)
        else :
            print(stack[-1])
            stack.pop()
    elif a[0] == 'size' : 
        print(len(stack))
    elif a[0] == 'empty' :
        if len(stack) == 0 :
            print(1)
        else :
            print(0)
    else :
        if len(stack) == 0 :
            print(-1) 
        else :
            print(stack[-1])
