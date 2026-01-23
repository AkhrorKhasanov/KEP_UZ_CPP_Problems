def even_index_or_value(lst):
    res = []
    for i in range(len(lst)):
        if i % 2 == 0 or lst[i] % 2 ==  0:
            res.append(lst[i])
    return res