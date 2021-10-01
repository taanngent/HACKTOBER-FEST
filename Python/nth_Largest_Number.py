def nthLargestNumber(n, arr):
    return sorted(arr, reverse=True)[n-1]

lst = [2,4,1,8,9,6,3,5,7]
print(nthLargestNumber(3, lst)) #Expected Output: 7