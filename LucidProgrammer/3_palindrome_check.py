def check_palindrome(string):
    n = len(string)
    n1 = n//2 
    n2 = (n+1)//2
    if n%2 == 1:
        m1 = string[0: n1]
        m2 = string[n1+1 : n]
        # print(m1,m2[::-1])
        if m1 == m2[::-1]:
            print("True")
        else : 
            print("False")
    else:
        m1 = string[0: n1]
        m2 = string[n1 : n]
        # print(m1,m2[::-1])
        if m1 == m2[::-1]:
            print("True")
        else : 
            print("False")
string = input()
string = string.replace(" ", "")
check_palindrome(string)