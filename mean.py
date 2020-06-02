def mean():
	total = 0
	length = 0
	def _mean(number):
		nonlocal total, length
		total += number
		length += 1
		return total/length
	return _mean
current_mean = mean()
current_mean(10)
current_mean(15)
current_mean(12)
print(current_mean(11))
print(current_mean(10))
print(current_mean(9))	
