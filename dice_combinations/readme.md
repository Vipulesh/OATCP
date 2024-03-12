## Problem Statement

The problem asks for the number of ways to construct sum `n` by throwing a dice one or more times. Each throw yields an outcome between 1 and 6. Here, we have to consider multiple inputs


## Code Overview

The `main` function then reads a long long `t` from the input, which represents the number of test cases. It then reads `t` long long numbers and stores them in the `ip` vector.

For each test case, the function creates a vector `dp` of size `n+1` initialized with 0, and sets `dp[0]` to 1. It then iterates over each integer `i` from 1 to `n`, and for each `i`, it iterates over each integer `j` from 1 to 6. If `i-j` is non-negative, it adds `dp[i-j]` to `dp[i]`, taking the modulo of the result with `mod`.

Finally, the function prints the value of `dp[n]` modulo `mod`, which represents the number of ways to construct the sum `n`.

### Tabulation Approach Used

The tabulation/bottom-up solution works as follows:

An array dp of size n+1 is created to store the number of ways to construct each sum. The array is initialized with 0, except for dp[0] which is set to 1. This is because there is exactly one way to construct the sum 0: by not throwing the dice at all.
The code then iterates over each integer i from 1 to n. For each i, it iterates over each integer j from 1 to 6. If i-j is non-negative, it adds dp[i-j] to dp[i], taking the modulo of the result with mod. This is because each throw of the dice can result in one of six outcomes, so the number of ways to construct the sum i is the sum of the number of ways to construct the sums i-1, i-2, …, i-6.
Finally, the value of dp[n] modulo mod is printed, which represents the number of ways to construct the sum n.
This approach ensures that all subproblems are solved before the larger problem, and avoids recalculating the same subproblems multiple times, which can significantly improve performance for large inputs.
