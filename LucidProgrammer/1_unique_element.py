def uni(string):
    return len(string)==len(set(string))
string = input("enter string : ")
print(uni(string))