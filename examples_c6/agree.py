s = input("Do you agree? ")

if s == "Y" or s == "y":
    print("Agreed.")
elif s == "N" or s == "n":
    print("Not agreed.")

# This could be expressed as well:
if s in ['Y', 'y']:
    print("Agreed.")
elif s in ['N', 'n']:
    print("Not agreed.")

# Object-oriented programming
    # certain types of values as str not only have properties as values, it could also have functions
    # docs.python.org/3/library/stdtypes.html#string-methods

# How to accept different kinds of YES in the answer (capitalization)
if s.lower() in ['y', 'yes']: # this will convert any string to lower cap
    print("Agreed.")
elif s.lower() in ['n', 'no']: # this is an example of a function inside a str (s) you call it inside the s (s.lower())
    print("Not agreed.")

# A better design of this could be (not calling the same function twice)
s = s.lower() # This will change s value and free the original
if s in ['y', 'yes']:
    print("Agreed.")
elif s in ['n', 'no']:
    print("Not agreed.")


# There is not difference using "" or ''
