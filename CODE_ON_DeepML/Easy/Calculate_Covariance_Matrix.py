def calculate_covariance_matrix(vectors: list[list[float]]) -> list[list[float]]:
	# Your code here
	lst_res = [[0 for i in range(len(vectors))] for j in range(len(vectors))]
	means = [sum(vectors[i])/len(vectors[i]) for i in range(len(vectors))]
	for i in range(len(vectors)):
		for j in range(len(vectors)):
			cov = 0
			for k in range(len(vectors[i])):
				cov += (vectors[i][k] - means[i]) * (vectors[j][k] - means[j])
			lst_res[i][j] = cov / (len(vectors[i]) - 1)

	return lst_res

print(calculate_covariance_matrix([[1, 2, 3], [4, 5, 6]]))