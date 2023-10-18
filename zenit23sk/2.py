s = input()

# find the frist string "ne" in it
i1 = s.find("ne") + 1
i2 = s.find("-") + 1

if ((i2 - i1) / 2) % 2 == 0:
    print("ano")
else:
    print("nie")