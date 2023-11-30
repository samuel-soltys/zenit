n = int(input())

def compare(a, b):
    sum = 0
    for i in range(4):
        sum += a[i] - b[i]
    return sum

# grid of numbers 4 x n
grid = []
for i in range(n):
    grid.append([int(i) for i in input().split()])

first_dict = {}
second_dict = {}
third_dict = {}
fourth_dict = {}
# split the grid into 4 parts and store the numbers in a dictionary and the index of the number in the grid
for i in range(n):
    first_dict[i] = grid[i][0]
    second_dict[i] = grid[i][1]
    third_dict[i] = grid[i][2]
    fourth_dict[i] = grid[i][3]

# sort the dictionaries by the value of the numbers
first_dict = {k: v for k, v in sorted(first_dict.items(), key=lambda item: item[1])}
second_dict = {k: v for k, v in sorted(second_dict.items(), key=lambda item: item[1])}
third_dict = {k: v for k, v in sorted(third_dict.items(), key=lambda item: item[1])}
fourth_dict = {k: v for k, v in sorted(fourth_dict.items(), key=lambda item: item[1])}

print("first_dict", first_dict)
print("second_dict", second_dict)
print("third_dict", third_dict)
print("fourth_dict", fourth_dict)

scores = {}
for i in range(n):
    # find value of the number in the grid in the first_dict
    first_score = first_dict[i][1]