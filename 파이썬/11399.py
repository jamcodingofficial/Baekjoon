'''
 * Author : JC
 * https://www.acmicpc.net/problem/11399
'''

# 버블 정렬
n = int(input())
l = list(map(int, input().split()))

for i in range(n-1, -1, -1) :
    for j in range(0, i) :
        if l[j] > l[j+1] :
            tmp = l[j]
            l[j] = l[j+1]
            l[j+1] = tmp

sum = 0
for i in range(n) :
    for j in range(0, i+1) :
         sum += l[j]
print(sum)
             
# 선택 정렬
n = int(input())
l = list(map(int, input().split()))

for i in range(n-1) :
    key = i
    for j in range(i+1, n) :
         if l[key] > l[j] :  
             key = j 
    tmp = l[key]
    l[key] = l[i]
    l[i] = tmp
         
sum = 0
for i in range(n) :
    for j in range(0, i+1) :
         sum += l[j]
print(sum)
    
# 삽입 정렬
n = int(input())
l = list(map(int, input().split()))

for i in range(1, n) :
    key = l[i] 
    j = i-1 
    while j>=0 and l[j] > key :
        l[j+1] = l[j]
        j -= 1 
    l[j+1] = key
    
sum = 0
for i in range(n) :
    for j in range(0, i+1) :
         sum += l[j]
print(sum)
