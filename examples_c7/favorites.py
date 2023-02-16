import csv  # gives access to csv capabilities

with open('favorites.csv', 'r') as file:
    reader = csv.DictReader(file) # it will return a dictionary (pairs of key and value)
    # next(row) jumps the header, but we dont need it if we use dictionary and call the column by its header name
    scratch, c, python = 0, 0, 0
    #is the same as scratch = 0 \n c = 0 \n python = 0
    for row in reader:
        favorite = row['language']  # row[1] in csv.reader is poorly designed cuz we are not gonna remember the name of the column or what if it changes?
        if favorite == 'Scratch':
            scratch += 1
        elif favorite == 'C':
            c += 1
        elif favorite == 'Python':
            python += 1
#if we add more languages this is poor design (elif, elif, elif)

# print(f'Scratch: {scratch}')
# print(f'C: {c}')
# print(f'Python: {python}')
        # print(favorite) will print a list of each row of the second column
# --------------------------------------------------------------------------------------------------------------

print('More elegant code (to add more languages)')

with open('favorites.csv', 'r') as file:
    reader = csv.DictReader(file)
    # create a count dictionary
    counts = {}  # or dict() both gives empty dictionary
    #with this we dont need condition for each language
    for row in reader:
        favorite = row['language']
        # counts[favorite] += 1 if we havent created the key 'Scratch' or 'C' or 'Python' there will be a key problem so, we should iterate through counts and check if its favorite
        if favorite in counts:  # this iterate through all the keys (favorite) in dictionary (count)
            counts[favorite] += 1  # now we can add the value of each favorite language
        else:
            counts[favorite] = 1 # if the language is not there yet and you find it, add 1 to the dict count

print('Print as the first element appear on the csv')
for favorite in counts:
    # this will print each favorite: and the number of times selected (the value of the keys)
    print(f'{favorite}: {counts[favorite]}')

print('Print alphabeticaly (sorted)')
for favorite in sorted(counts):
    print(f'{favorite}: {counts[favorite]}')

print('Print reversed alphabeticaly (sorted)')
for favorite in sorted(counts, reverse=True):
    print(f'{favorite}: {counts[favorite]}')

# What if i want to print the favorites sorted by the number of counts they have
#we create a simple function that you handle a language and it will tell you what count has
def get_value(language):
    return counts[language]

print('Print sorted by its counts')
for favorite in sorted(counts, key=get_value):
    print(f'{favorite}: {counts[favorite]}')

print('Print sorted by it counts with lambda function and reversed, showing the favorite at top')
# to not use the function (created to be used only one time, you can use a lambda function)
for favorite in sorted(counts, key=lambda language: counts[language], reverse=True):
    print(f'{favorite}: {counts[favorite]}')

# if we we want to make this program interactive and ask for favorite to the user:
favorite = input('Favorite: ')
if favorite in counts:
    print(f'{favorite}: {counts[favorite]}')









