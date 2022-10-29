'''
 * Author : JC
 * https://www.acmicpc.net/problem/1764
'''

def binarySearch(arr, length, target) :
    low = 0
    high = length - 1
    while low <=  high :
        mid = (low + high) // 2
        if target == arr[mid] :
            return 1
        elif target < arr[mid] :
            high = mid - 1
        else :
            low = mid + 1
    return 0
 
a, b = map(int, input().split())
a1 = []
b1 = []

for i in range(a) :
    m = input()
    a1.append(m)
    
for i in range(b) :
    m = input()
    b1.append(m)

a1.sort() 

ans = []
for i in range(b) :
    res = binarySearch(a1, a, b1[i])
    if res == 1 :
        ans.append(b1[i])
        
ans.sort()

print(len(ans))
for i in ans :
    print(i)
