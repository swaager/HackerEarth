tc = int(raw_input())
for xtt in range (tc):
    n = int(raw_input())
    array = list(map(int, raw_input().split()))
    x = y = 0
    i = 0
    j = n - 1
    am = ar = 0
    while i <= j:
        if am <= ar:
            x += 1
            am += array[i]
            i += 1
        else:
            y += 1
            ar += 2 * array[j]
            j -= 1
    print x,y
