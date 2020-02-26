c = [12, 3, 1, 2, -6, 5, -8, 6] 
d = sorted(c)
print(d) 
print("\n")
#[-8, -6, 1, 2, 3, 5, 6, 12] 
arr = []
z = len(d)
for i in range(z):
    for j in range(z):
        x = 0
        if d[i] < d[j]:
            x = d[i] + d[j]
        

         
            if x in d:
                
                f = [d[i], d[j], x]
                arr.append(f)
            # d[i], d[j],x = 0,0,0

print(*arr,sep="\n")          
            # d.pop(d.index(d[i]))
            # d.pop(d.index(d[j]))
            # d.pop(d.index(x))
            # c = len(d)
            
           