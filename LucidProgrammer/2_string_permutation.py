def check(string1,string2):
    z = 0
    y = 0
    if len(string1) == len(string2):
        
        for x in string1:
            # print(x,": ",string1.count(x))
            # print(x,": ",string2.count(x))
            if x in string2 and string1.count(x) == string2.count(x) :
                z +=1
            else:
                y +=1
                break
    else:
        return False
    
    if y > 0 :
        print("false")
        
    elif z > 0 :
        print("True")
string1 = input()
string1 = string1.replace(" ","")
string2 = input()
string2 = string2.replace(" ","")

check(string1,string2)