inp = [ int(x) for x in input().split() ]
ding = inp[0]
dong = inp[1]

prisera = input()
result = 0

for x in range(26):
    ding_v = prisera.count(chr(x + 65)) * ding
    dong_v = x * dong
    result += min(dong_v, ding_v)

print(result)