def check_palindrome(string) :
    n = 0
    l = len(string)
    if len(string)%2 == 0 :
        n = len(string)/2
        m1 = string[int(n) : int(l-1)]
        m2 = string[0:n]
        if m1 == m2[::-1]:
            return True
        else:
            return False
    else:
        n = (len(string) + 1)/2
        m1 = string[int(n+1) : int(l-1)]
        m2 = string[0:n]
        if m1 == m2[::-1]:
            return True
        else:
            return False


string = input()
print(check_palindrome(string))
