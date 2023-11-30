def find_arrays_with_highest_difference_optimized(grid):
    max_difference = float('-inf')
    selected_arrays = None
    array_sums = {}

    for i in range(len(grid)):
        for j in range(i + 1, len(grid)):
            # Check if the absolute differences for this pair are already calculated
            if (i, j) not in array_sums:
                array_sums[(i, j)] = sum(abs(a - b) for a, b in zip(grid[i], grid[j]))

            diff = array_sums[(i, j)]

            if diff > max_difference:
                max_difference = diff
                selected_arrays = (grid[i], grid[j])

    return selected_arrays

n = int(input())

# grid of numbers 4 x n
grid = []
for i in range(n):
    grid.append([int(i) for i in input().split()])

result = find_arrays_with_highest_difference_optimized(grid)

print(sum(abs(a - b) for a, b in zip(result[0], result[1])))