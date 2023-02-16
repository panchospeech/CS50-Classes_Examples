from cs50 import get_int

scores = [] # there is no need to put how many elements will be in an array
for i in range(3):
    score = get_int('Score: ')
    scores.append(score) # apend score put by the user in the array scores
    # line 6 also can be made like that, that creates a new list that is appended to scores
    scores += [score]

average = sum(scores) / len(scores)
print(f'Average: {average}')