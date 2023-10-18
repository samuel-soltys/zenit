n = input()
for i in range(int(n)):
    num = int(input())
    bin = str("{:032b}".format(num))[::-1]
    print(int(bin, 2))