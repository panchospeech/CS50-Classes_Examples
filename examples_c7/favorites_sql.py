from cs50 import SQL

# Create the variable with the document name using SQL
db = SQL('sqlite:///favorites.db')

 # Prompt the user with their favorite
favorite = input('Favorite: ')

# Create a variable that will excecute db in SQL and use in a string the command used in SQL
# This is asking the count (named as n) from favorites table where the answer is Mario
rows = db.execute('SELECT COUNT(*) AS n FROM favorites WHERE problem = "Mario"')

#if you want to prompt the user for an input to give you that count, you should use it like that:
row = db.execute('SELECT COUNT(*) AS n FROM favorites WHERE problem = ?', favorite) # question mark as placeholder and then specify the value (favorite, that is th input)

# This returns as a list (in this case as a dictionary with keys and values) that is printable, and if i want the first element (the only one in this case, cuz its just 1 row)
# it will print the number of people that favorited Mario
row = rows[0]
print(row['n'])

# rows[0]['n'] == row[n] # this is the same, because in the rows given you search for the first one rows[0] = row.
# but to print the count (n) from favorites where problem is mario, you should also select from that row the [n] value
