# -*- coding: utf-8 -*-
"""
Created on Mon Sep 13 10:20:23 2021

@author: Debshishu Ghosh
"""
def dupli(x):
    size = len(x)
    dups = []
    for i in range(size):
        k = i + 1
        for j in range(k, size):
            if x[i] == x[j] and x[i] not in dups:
                dups.append(x[i])
    return dups

search = []
n = int(input("Enter number of elements : "))
 
for i in range(0, n):
    ele = int(input())
    search.append(ele)
    
print("Your list is: ")
print(search)
print("The duplicates are : ")
print(dupli(search))
