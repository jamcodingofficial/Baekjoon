'''
 * Author : JC
 * https://www.acmicpc.net/problem/2752
'''

# 버블 정렬
a = list(map(int, input().split()

for i in range(2, -1, -1) : 
    for j in range(0, i) :
        if a[j] > a[j+1] :
            tmp = a[j]
            a[j] = a[j+1]
            a[j+1] = tmp

for i in a :
    print(i, end = ' ')
             
# 선택 정렬
a = list(map(int, input().split()))

for i in range(2) :
    key = i
    for j in range(i+1, 3) :
         if a[key] > a[j] :  
             key = j 
    tmp = a[key]
    a[key] = a[i]
    a[i] = tmp
         
for i in a :
    print(i, end = ' ')
        
# 삽입 정렬
a = list(map(int, input().split())) 

for i in range(1, 3) :
    key = a[i] 
    j = i-1 
    while j>=0 and a[j] > key :
        a[j+1] = a[j]
        j -=1 
    a[j+1] = key
    
for i in a :
    print(i, end = ' ')    
