'''
 * Author : JC
 * https://www.acmicpc.net/problem/7795
'''

def down(arr, length, target) :
    low = 0
    high = length - 1
    while low < high :
        mid = (low + high) // 2
        if arr[mid] >= target :
            high = mid
        else :
            low = mid + 1
    return high

def up(arr, length, target) :
    low = 0
    high = length - 1
    while low < high :
        mid = (low + high) // 2
        if arr[mid] > target :
            high = mid
        else :
            low = mid + 1
    return high

n = int(input())
a = list(map(int, input().split()))
m = int(input())
b = list(map(int, input().split()))

a.sort()

for i in range(m) :
    r1 = down(a, n, b[i])
    r2 = up(a, n, b[i])
    if r2 == n-1 and a[n-1] == b[i] :
        r2+=1
    print(r2 - r1, end = ' ')
