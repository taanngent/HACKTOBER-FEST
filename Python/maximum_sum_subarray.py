A=[1,2,3,4,5,6,-7,8,9,-10]
max_sum=A[0]
max_yet=A[0]
for i in A[1:]:
    max_sum=max(i,max_sum+i)
    max_yet=max(max_yet,max_sum)
print(max_yet)
