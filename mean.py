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

class homie:
	def __init__(self, x:str, y:str) -> None:
		print(f'The values sent are {x} and {y}' )
		return None

object = homie("First String", 'Second String')
print(object.__class__)

# I will recap what things I have learned 
#the dictionary of a an object is accessed through__dict__ attribute of the class
object.attribute1 = 999999999
print(object.__dict__)
print(type(object).__dict__)
print(type(homie).__dict__['__dict__'].__get__(type,homie)['__dict__'].__get__(type, homie))

