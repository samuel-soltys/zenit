n = int(input())

def rotate_matrix(matrix):
    return list(list(x) for x in zip(*matrix))[::-1]

def check_horizontal(matrix, n):
    for row in matrix:
        if ("ZENIT" in ''.join(row)) or ("TINEZ" in ''.join(row)):
            return True
    return False

def check_vertical(matrix, n):
    # rotate the 2D matrix by 90 degrees
    rotated_matrix = rotate_matrix(matrix)
    return(check_horizontal(rotated_matrix, n))

def check_one_diagonal(matrix, n):
    for i in range(n - 4):
        for j in range(n - 4):
            if matrix[i][j] == "Z" and matrix[i + 1][j + 1] == "E" and matrix[i + 2][j + 2] == "N" and matrix[i + 3][j + 3] == "I" and matrix[i + 4][j + 4] == "T":
                return True
            elif matrix[i][j] == "T" and matrix[i + 1][j + 1] == "I" and matrix[i + 2][j + 2] == "N" and matrix[i + 3][j + 3] == "E" and matrix[i + 4][j + 4] == "Z":
                return True
    return False

def check_other_diagonal(matrix, n):
    rotated_matrix = rotate_matrix(matrix)
    return(check_one_diagonal(rotated_matrix, n))

def check_matrix(matrix, n):
    if check_horizontal(matrix, n) or check_vertical(matrix, n) or check_one_diagonal(matrix, n) or check_other_diagonal(matrix, n):
        print("OK")
    else:
        print("WA")


# read n * n matrix of letters into a list of lists
matrix = []
for i in range(n):
    matrix.append([*input()])

check_matrix(matrix, n)