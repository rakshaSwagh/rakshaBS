n = int(input("Enter the size of the array: "))
arr = list(map(int, input("Enter the array elements: ").split()))
target = int(input("Enter the target element: "))
start = 0
end = n-1
mid = (start+end)//2

while(start <= end):
    mid = (start+end)//2
    if(arr[mid] == target):
        print("Element found at index ", mid)
        break
    elif(arr[mid] > target):
        end = mid - 1
    else:
        start = mid + 1
    
else:
    print("Element not found")
