
def calculate_eigenvalues(matrix: list[list[float|int]]) -> list[float]:
    eigenvalues = []
    
    a = 1
    b_traceA = -(matrix[0][0] + matrix[1][1])
    c_detA = matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0]

    delta = b_traceA*b_traceA - 4 * a * c_detA
    
    if (delta == 0):
        eigenvalues = [-b_traceA/(2*a),-b_traceA/(2*a)]
    elif (delta < 0):
        eigenvalues = [0,0]
    else:
        l1 = (-b_traceA + delta**(1/2))/(2*a)
        l2 = (-b_traceA - delta**(1/2))/(2*a)
        eigenvalues = [l1,l2]

    eigenvalues.sort(reverse=True)
    return eigenvalues

a = [[2, 1], [1, 2]]
print(calculate_eigenvalues(a))