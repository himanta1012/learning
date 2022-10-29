n=int(input("no of student : "))
names = {}
for i in range(n):
    id=int(input("enter id : "))
    name=input("enter name : ")
    names[id]=name
for id in sorted(names.keys()):
    print("{}: {}".format(id,names[id]))
