'''
 * Author : JC
 * https://www.acmicpc.net/problem/1920
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

a = int(input())
a1 = list(map(int, input().split()))
b = int(input())
b1 = list(map(int, input().split()))

a1.sort() 

for i in range(b) :
    print(binarySearch(a1, a, b1[i]))
