## people = dict() == people = {} #this creates an empty dictionary (with keys spaces and values spaces)
## scores = list() == scores = [] #this creates an empyt list

people = {
    'Carter': '+1-617-495-1000'
    'David': '+1-949-468-2750'
}

name = input('Name')
if name in people:
    # this will print the number indexed in the dictionary with the name prompted (the value of the key)
    print(f'Number: {people[name]}')

    # can be made like that too
    number = people[name]
    print(f'Number: {number}')