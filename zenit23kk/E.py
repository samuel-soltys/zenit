n, k = [int(i) for i in input().split()]

a = [int(i) for i in input().split()]

# traverse the array by k segments and print out the highest number in each segment
for i in range(0, n - k):
    print(max(a[i:i+k]), end=" ")
print(max(a[(n - k):n]))
