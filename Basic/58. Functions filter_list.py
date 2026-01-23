def filter_list(lst, a):
    res = []
    if not a:
        for i in lst:
            if i % 2:
                res.append(i)
    else:
        for i in lst:
            if not i % 2:
                res.append(i)
    return res