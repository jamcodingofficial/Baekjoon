'''
 * Author : JC
 * https://www.acmicpc.net/problem/2587
'''

# 버블 정렬
l = []
for i in range(5) :
    m = int(input())
    l.append(m)

for i in range(4, -1, -1) :
    for j in range(0, i) :
        if l[j] > l[j+1] :
            tmp = l[j]
            l[j] = l[j+1]
            l[j+1] = tmp

print(sum(l) // 5)
print(l[2])
    
             
# 선택 정렬
l = []

for i in range(5) :
    m = int(input())
    l.append(m)

for i in range(4) :
    key = i
    for j in range(i+1, 5) :
         if l[key] > l[j] :  
             key = j 
    tmp = l[key]
    l[key] = l[i]
    l[i] = tmp
         
print(sum(l) // 5)
print(l[2])
    
# 삽입 정렬
l = []

for i in range(5) :
    m = int(input())
    l.append(m)

for i in range(1, 5) :
    key = l[i] 
    j = i-1 
    while j>=0 and l[j] > key :
        l[j+1] = l[j]
        j -= 1 
    l[j+1] = key
    
print(sum(l) // 5)
print(l[2]) 
