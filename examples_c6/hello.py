from cs50 import get_string # this is how to import a single function from a library

answer = get_string("What's your name? ")
print("Hello, " +  answer)  # + concatenet
print("Hello, ", answer)  # , indicate more arguments
print(f"Hello, {answer}") # curly brases indicate print the value of answer for that the F is needed
