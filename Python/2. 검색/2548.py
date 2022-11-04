'''
 * Author : JC
 * https://www.acmicpc.net/problem/2548
'''

def binarySearch(arr, len) :
    avg = sum(arr) // n 
    ans = 0
    for i in arr :
        ans = ans + abs(avg - i)
    low = 0
    high = n - 1
    mid = 0
    idx = 0

    while low <= high :
        mid = (low + high) // 2
        res = 0
        for i in arr:
            res += abs(arr[mid]-i)
        if ans >= res :
            ans = res
            idx = mid
            high = mid - 1
        else :
            low = mid + 1
    print(l[idx])

n = int(input())
l = list(map(int,input().split()))

l.sort()  

binarySearch(l, n)