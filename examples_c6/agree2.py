import re

s = input('Do you agree?')

s = s.lower()

if re.search('^y(es)?$' s): # search for the beginning ^ for y (es) is optional ? and $ its the end of the input
    print('Agreed')
elif re.search('^no?$' s):
    print('Not agreed')
