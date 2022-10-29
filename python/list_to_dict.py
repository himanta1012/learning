a=int(input(" Enter length for list 1 : "))
list_1=[]
for i in range (0,a):
    x=int(input("Enter value for Element : "))
    list_1.append(x)
print(list_1)
b=int(input("Enter the length of list 2 : "))
list_2=[]
for i in range (0,b):
    y=input("Enter value for Element : ")
    list_2.append(y)
print(list_2)
dic={}
for key in list_1:
    for values in list_2:
        dic[key]=values
print(dic)
