a = [[1,2,3],[4,5,6]]
b = [[0,0] for i in range(len(a[0]))]
print(a)

for i in range(len(a)):
    c = 0
    for j in range(len(a[i])):
        b[j][i] = a[i][j] 
        
print(b)