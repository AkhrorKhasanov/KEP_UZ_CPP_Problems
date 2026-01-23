def max_2(*args) -> int:
    maks = max(args)
    for i in range(len(args)):
        if args[i] == maks:
            del args[i]
            break
    return max(args)