'''
 * Author : JC
 * https://www.acmicpc.net/problem/1427
'''

# 버블 정렬
l = list(map(int,input()))
length = len(l)

for i in range(length-1, -1, -1) :
    for j in range(0, i) :
        if l[j] < l[j+1] :
            tmp = l[j]
            l[j] = l[j+1]
            l[j+1] = tmp

for i in l :
    print(i, end='')
             
# 선택 정렬
l = list(map(int,input()))
length = len(l)

for i in range(length-1) :
    key = i
    for j in range(i+1, length) :
         if l[key] < l[j] :  
             key = j 
    tmp = l[key]
    l[key] = l[i]
    l[i] = tmp
         
for i in l :
    print(i, end='')
    
    
# 삽입 정렬
l = list(map(int,input()))
length = len(l)

for i in range(1, length) :
    key = l[i] 
    j = i-1 
    while j>=0 and l[j] < key :
        l[j+1] = l[j]
        j -= 1 
    l[j+1] = key
    
for i in l :
    print(i, end='')
