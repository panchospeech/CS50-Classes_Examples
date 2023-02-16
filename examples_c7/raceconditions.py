from cs50 import SQL

# This is an example of how an ig photo is liked, but this will have a race condition problem: more users interrumpting the execution of code
rows = db.execute('SELECT likes FROM post WHERE id = ?', id);
likes = rows[0]['likes']
db.execute('UPDATE post SET likes = ? WHERE id = ?', likes + 1, id);

#this code solve that problem: wrap the 3 lines of query with a TRANSACTION statement and COMMIT, ATOMIC = all execute it or not at all
db.execute('BEGIN TRANSACTION') #THIS HAS CHANGED
rows = db.execute('SELECT likes FROM post WHERE id = ?', id)
likes = rows[0]['likes']
db.execute('UPDATE post SET likes = ? WHERE id = ?', likes + 1, id);
db.execute('COMMIT') # THIS HAS CHANGED TOO



