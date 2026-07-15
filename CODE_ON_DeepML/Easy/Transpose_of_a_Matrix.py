def transpose_matrix(a: list[list[int|float]]) -> list[list[int|float]]:
    b = [[0 for j in range(len(a))] for i in range(len(a[0]))]

    for i in range(len(a)):
        c = 0
        for j in range(len(a[i])):
            b[j][i] = a[i][j] 

    return b