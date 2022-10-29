upper, lower = 0, 0
str=input("Enter the string : ")
for i in str:
    if(i.islower()):
        lower = lower + 1
    elif(i.isupper()):
        upper = upper + 1

print('Lowercase characters:',lower)
print('Uppercase characters:',upper)
