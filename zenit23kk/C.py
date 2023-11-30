n = int(input())

a = [int(i) for i in input().split()]

def solve(a, n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    
    max_len = 2
    
    nums = set()
    length = 0
    i = 0
    last_length = 0
    while i < n:
        if a[i] in nums:
            if(len(nums) == 2):
                last_length += 1
            length += 1
        else:
            if(len(nums) < 2):
                nums.add(a[i])
                length += 1
            else:
                max_len = max(max_len, length)
                length = last_length + 1
                nums.clear()
                # i = start_index - 1
        i += 1

    max_len = max(max_len, length)
    print(max_len)

solve(a, n)