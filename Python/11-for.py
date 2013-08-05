#! -*- coding: utf-8 -*-

details = [23, True, "Bangalore", "Python", "Kracekumar"]
"""print(details)

print(details[0])
print(details[len(details) -1 ])
print(details[-2])
"""

"""for(i= 0; i< n; i++){
	array[i]
	}}"""
for temp in details:
    print(temp)
    
for index, val in enumerate(details):
	print index, details[index], val
    
"""
nos = range(10)
print(nos)
print("Even numbers")
for no in nos:
    if no % 2 == 0:
        print(no)
print("Range")
print(range(10))
print(range(5, 10))
print(range(-5, -10))
print(range(-10, -5))
print(range(-5, -10, -1))
print(range(1, 100, 10))
"""
