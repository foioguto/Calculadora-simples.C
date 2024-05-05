name = input("What's your name?\n")
#sotre the input in the variable name 
print("Hello " + name + ".")
#remember to space after a statement 
#you can also : length = len(name); and substitute str(len(name)) to length
print("Your name has " + str(len(name)) + " letters.") 
#len function calculate the length of a object
#In python, you cannot concatenate strings and integers. Because this, i used str(len())