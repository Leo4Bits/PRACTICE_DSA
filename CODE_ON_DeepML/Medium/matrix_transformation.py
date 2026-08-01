import numpy as np

def transform_matrix(A: list[list[int|float]], T: list[list[int|float]], S: list[list[int|float]]) -> list[list[int|float]]:
    if not (np.linalg.det(T) or np.linalg.det(S)): return -1
    def multi_two_matrix(mA: list[list[int|float]], mT: list[list[int|float]]):
        mA = np.array(mA)
        mT = np.array(mT)
        matrix_res = [[i for i in range(len(mT))] for j in range(len(mA))]
        for i in range(len(matrix_res)):
            for j in range(len(matrix_res[0])):
                matrix_res[i][j] = np.sum(mA[i]*mT[:,j])
       
        return matrix_res

    

    T_inv = np.linalg.inv(T)
   
    transformed_matrix = multi_two_matrix(multi_two_matrix(T_inv,A),S)
    return transformed_matrix
A = [[1, 2], [3, 4]]
T = [[2, 0], [0, 2]]
S = [[1, 1], [0, 1]]
print(transform_matrix(A,T,S))


