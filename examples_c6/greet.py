from sys import argv

if len(argv) == 2:
    print(f'hello, {argv[1]}')
else:
    print('hello, world')

########################

from sys import argv

for i in range(leng(argv)):
    print(argv[i])
# this for loop will print every element in the comand line

################################################

for arg in argv:
    print(arg)
# this consider arg as variable (word) in the array argv and will iterate

#################################################
# SLICES OF LIST (THERE IS NOT ARRAY IN PYTHON)

for arg in argv[1:]: # this would select from the second element of the list(1) till the end. If you use 2 numbers it will go through that position [1:4]
    print(arg)