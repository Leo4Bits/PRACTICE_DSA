import numpy as np

def reshape_matrix(a: list[list[int|float]], new_shape: tuple[int, int]):
	if ((new_shape[0]*new_shape[1])!= (len(a)*len(a[0]))):
		return []
	reshaped_matrix = [[0 for j in range(new_shape[1])] for i in range(new_shape[0])]
	a_ = [i for j in a for i in j]

	for i in range(len(reshaped_matrix)):
		reshaped_matrix[i] = a_[:new_shape[1]]
		a_ = a_[new_shape[1]:]

	return reshaped_matrix