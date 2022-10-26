def binary_search(arr, x):
    low = 0
    high = len(arr) - 1
    mid = 0
 
    while low <= high:
 
        mid = (high + low) // 2
 
        if arr[mid] < x:
            low = mid + 1
 
        elif arr[mid] > x:
            high = mid - 1
 
        else:
            return mid
 
    return -1

arr = []

n =int(input("Enter the size of list : "))
for i in range(n):
    l=int(input("Enter the element of list : "))
    arr.append(l)
x=int(input("Enter element to Search : "))
result = binary_search(arr, x)
 
if result != -1:
    print("Search successful present at index = ", str(result))
else:
    print("Search unsuccessful")
