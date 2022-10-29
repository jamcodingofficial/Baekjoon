'''
 * Author : JC
 * https://www.acmicpc.net/problem/10816
'''

a = int(input())
b = list(map(int,input().split()))
b.sort() 
avg = sum(b) // a 
ans = 0

for i in b :
    ans = ans + abs(avg - i)

low = 0
high = a - 1
mid = 0
idx = 0

while low <= high :
    mid = (low + high) // 2
    res = 0
    for i in b :
        res += abs(b[mid]-i)
    
    if ans >= res :
        ans = res
        idx = mid
        high = mid - 1
    else :
        low = mid + 1

print(b[idx])