def check_intersection(a, b, n, m):
    intersections = []
    # convert from grid to cartesian. n is the numver of rows and m is the number of columns
    x1 = (a - 1) % m
    y1 = (a - 1) // m
    
    x2 = (b - 1) % m
    y2 = (b - 1) // m
    # print("ccor " + str(x1) + ' ' + str(y1) + ' ' + str(x2) + ' ' + str(y2))

    slope = (y2 - y1) / (x2 - x1)
    # print(slope)
    # if(slope < 0):
    for i in range(x1 + 1, x2, 1):
        # print(i)
        if int(abs(i * slope) * 10) % 10 == 0:
            if slope < 0:
                
                x = int(i)
                y = int(y1 - int(abs((x1 - i) * slope)))
                
                intersections.append(y * m + (x + 1))
            else:
                x = int(i)
                y = int(y1 + int(abs((x1 - i) * slope)))
                intersections.append(y * m + (x + 1))

    return intersections

def check_vzor(a, m, l, n):
    if len(set(a)) != l:
        # print("duplicates")
        return False
    for i in range(l - 1):
        intersections = check_intersection(a[i], a[i + 1], n, m)
        if(intersections) != None:
            for intersection in intersections:
                if(intersection not in a[:i]):
                    return False
    
    return True


n, m, l = [int(x) for x in input().split()]

a = [ int(x) for x in input().split() ]


if(check_vzor(a, m, l, n)):
    print("Ano")
else:
    print("Nie")