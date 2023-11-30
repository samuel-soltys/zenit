n = int(input())

a = [int(i) for i in input().split()]


ans = 1
for i in range(n):
    ans = (ans * a[i]) % 1000000007


for i in range(n - 1):
    print((ans // a[i] % 1000000007), end=" ")
    # print("without", i, ":", ans )
print((ans // a[n - 1] % 1000000007))
