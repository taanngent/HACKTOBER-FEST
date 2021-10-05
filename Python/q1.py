def duplicate (li):
    se=set()

    li.sort()
    l=len(li)

    for i in range(1,l):
        if li[i]==li[i-1] :
            se.add(li[i])
    re=list(se)
    return re

ll=[2,1,4,5,3,8,2,4,7,6,2,4.9,3,7,1,9]
print(duplicate(ll)) 