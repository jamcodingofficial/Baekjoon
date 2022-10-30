
n, k, m = map(int, input().split())
l = [i for i in range(1, n+1)]
result = []
number = 0
cnt = 0
check = 0

for i in range(n) :
    if check == 0 :
        number += k-1
        if(number >= len(l)):
            while(number >= len(l)):
                number -= len(l)
        result.append(l.pop(number))

    else:
        number -= k-1
        if(number < 0):
            while(number < 0):
                number += len(l)
        number -= 1
        if(number < 0):
            number += len(l)
        result.append(l.pop(number))
    cnt += 1
    
    if cnt == m:
        check = not check
        cnt = 0

for i in result :
    print(i)       