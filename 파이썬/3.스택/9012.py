'''
 * Author : JC
 * https://www.acmicpc.net/problem/9012
'''

t = int(input())

for i in range(t) :
    m = input()
    length = len(m)
    tmp = []
    check = True
    for j in range(length) : 
        if m[j] == '(' :
            tmp.append(1)
        else :
            if len(tmp) == 0 :
                check = False
                break
            else :
                tmp.pop()

    if check == True and len(tmp) == 0: 
        print("YES")
    else :
        print('NO')