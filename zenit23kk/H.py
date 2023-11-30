pocet = int(input())

dosky = [int(i) for i in input().split()]

minimum = min(dosky)

# substract the minimum from all the numbers
dosky = [i - minimum for i in dosky]

tahy = minimum
# print("tahy:", tahy)
def zafarby_optimalne(pocet, dosky, tahy):
    while sum(dosky) > 0:
        # print(dosky)
        max_len = 0
        curr_len = 0
        start_index = 0
        end_index = 0
        for i in range(len(dosky)):
            if dosky[i] > 0:
                curr_len += 1
            else:
                if curr_len > max_len:
                    max_len = curr_len
                    
                    start_index = i - curr_len
                    end_index = i
                curr_len = 0
        if curr_len > max_len:
            start_index = pocet - 1
            max_len = curr_len
        # print("max", max_len)

        if(max_len == 1):
            # set the number to 0
            tahy += 1
            dosky[start_index] = 0
        else:
            # subtract 1 from all the numbers in the sequence
            tahy += 1
            for i in range(start_index, end_index):
                dosky[i] -= 1
        # print("tahy:", tahy)
    return tahy
    



def solve(pocet, dosky):
    if pocet == 1:
        return 1
    print(zafarby_optimalne(pocet, dosky, tahy))

solve(pocet, dosky)