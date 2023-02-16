import csv

file = open('phonebook.csv', 'a') # a for append, new line of information, write will delete everything

name = input('Name: ')
number = input('Number: ')

writer = csv.writer(file) # treat this open file as a csv file
writer.writerow([name, number])

file.close()

####################################################

import csv

with open('phonebook.csv', 'a') as file:

    name = input('Name: ')
    number = input('Number: ')

    writer = csv.writer(file) # treat this open file as a csv file
    writer.writerow([name, number])

#with the following opening of the file do the following and then close it automatically

#what if somebody writes the number first and then the name? change this 2 lines (writer = csv.writer(file) and writer.writerow([name, number])

import csv

with open('phonebook.csv', 'a') as file:

    name = input('Name: ')
    number = input('Number: ')

    writer = csv.DictWriter(file, fieldnames=['name', 'number']) # uses a dictionary library so the order will be inteligent
    writer.writerow({'name': name, 'number': number})


