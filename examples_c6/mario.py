from cs50 import get_int

# python does not have do loop

while True:
    n = get_int('Height: ')
    if n > 0:
        break #this replace do while, you break the loop when this condition is true


for i in range(n):
    print('#')


######################################################################################

def main():
    height = get_height()
    for i in range(height):
        print('#')


def get_height():
    while True:
        try: # the program will try to do the following
            n = int(input('Height: '))
            if n > 0:
                # there is no need of break if we use return
                return n
        except ValueError: # except if something goes wrong (user do not give an int in this case)
            print('Not an integer')


main()