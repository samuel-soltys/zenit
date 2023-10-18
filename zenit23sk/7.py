n = int(input())

a = [ int(x) for x in input().split() ]
b = [ int(x) for x in input().split() ]

for ai in a.copy():
    if ai in b:
        a.remove(ai)
        b.remove(ai)
    elif ai + 1 in b:
        a.remove(ai)
        b.remove(ai + 1)

if(len(a) + len(b) != 0):
    print("Neda sa")
else:
    print("Jednoduche")

# a.sort(reverse=True)
# b.sort(reverse=True)
# # print(a)
# # print(b)
# for i in range(len(a)):
#     if a[i] != b[i] - 1:
#         print('Neda sa')
#         exit()

# print('Jednoduche')
