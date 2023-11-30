r, c = input().split()

mena = [str(i) for i in input().split()]

grid = []
for i in range(int(r)):
        grid.append([*input()])

for i in range(int(r)):
    for j in range(int(c)):
            if grid[i][j].isdigit():
                    grid[i][j] = mena[int(grid[i][j]) - 1]

for i in range(int(r)):
    for j in range(int(c)):
            print(grid[i][j], end='')
    print()