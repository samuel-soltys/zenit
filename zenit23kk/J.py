def count_permutations_with_sum(nums, target_sum):
    n = len(nums)

    # Create a table to store the count of solutions for all possible sums
    # dp[i][j] represents the number of ways to get the sum j using the first i elements of nums
    dp = [[0] * (target_sum + 1) for _ in range(n + 1)]

    # There is one way to get a sum of 0 (empty subset)
    for i in range(n + 1):
        dp[i][0] = 1

    # Fill the table using a bottom-up approach
    for i in range(1, n + 1):
        for j in range(target_sum + 1):
            dp[i][j] = dp[i - 1][j]
            if j >= nums[i - 1]:
                dp[i][j] += dp[i - 1][j - nums[i - 1]]

    return dp[n][target_sum]

# Example usage:
nums = [1, 2, 3, 4, 5]
target_sum = 8
result = count_permutations_with_sum(nums, target_sum)
print(f"Number of permutations with sum {target_sum}: {result}")