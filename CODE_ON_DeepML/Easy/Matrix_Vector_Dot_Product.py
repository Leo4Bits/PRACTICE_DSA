def matrix_dot_vector(a: list[list[int|float]], b: list[int|float]) -> list[int|float]:
	# Return a list where each element is the dot product of a row of 'a' with 'b'.
	# If the number of columns in 'a' does not match the length of 'b', return -1.
	res = []
	for i in range(len(a)):
		if len(a[i]) != len(b):
			return -1
		a[i] = [a[i][it] * b[it] for it in range(len(b))]
		res.append(sum(a[i]))

	return res