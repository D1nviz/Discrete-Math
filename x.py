result = 0

n = 21

i = 0

for x1 in range(i, n,2):
    for x2 in range(i, n,2):
        for x3 in range(i, n,2):
            for x4 in range(i+1, n,2):
                for x5 in range(i+1, n,2):
                    for x6 in range(i+1, n,2):
                        if x1 + x2 + x3 + x4 + x5 + x6 == n:
                            result += 1


print(result)