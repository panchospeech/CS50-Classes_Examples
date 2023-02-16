import sys

# when you import a library you have to mention like that the function(sys.argv)
if len(sys.argv) != 2:
    print('Missing command-line argument')
    sys.exit(1) # return value and exit program

print(f'Hello, {sys.argv[1]}')
sys.exit(0)