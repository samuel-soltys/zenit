n = input()

inp = [ int(x) for x in input().split() ]
sum_inp = sum(inp)

for i in range(len(inp)):
    print(sum_inp - inp[i])
