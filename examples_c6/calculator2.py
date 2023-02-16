x = int (input("x: ")) # if you use just input, the answerr comes always back as an string
y = int (input("y: ")) # thats why we use the function int() to convert string to int

z = x / y

print(z)
print(f"{z:.50f}") #this way the result will give you 50 significant numbers and the f at the end work as treat this as float number
print(x + y)


# input replace get_int from cs50 and its included in python library (calculator.py)

# z with 50 significant numbers will give us floating-point imprecision
# integer overflow is not a thing in python (counts at big as you want) adds more and more bits