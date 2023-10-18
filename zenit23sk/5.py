n = int(input())
max1 = -1 
max2 = -1
for i in range(int(n)):
    inp = int(input())
    
    # find max1 and max2
    if inp > max1:
        max2 = max1
        max1 = inp
    elif inp > max2:
        max2 = inp
    
print(max1, max2)

if(max2 - 1) > n - 2:
    print(n - 2)
else:
    print(max2 - 1)