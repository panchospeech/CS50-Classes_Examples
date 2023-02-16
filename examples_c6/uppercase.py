before = input('Before: ')
print('After: ', end='')
for c in before: # for variable c in string before in a loop
    print(c.upper(), end='')
print()

############################################################

before = input('Before: ')
after = before.upper() # there is not need to act in characters individualy, i can upper case the hole array
print(f'After: {after}')