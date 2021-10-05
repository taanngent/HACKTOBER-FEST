def group(_group,_size):

    re=[[]]
    for i in _group:
        if(len(re[-1])==_size):
            re.append([])
        re[-1].append(i)
    return(re)

le=range(12)
print(group(le,3))