# Rotate Function

This program is designed to perform efficient array manipulations to find the maximum value of a particular calculation based on the array elements.

## Logic 
A more efficient solution to the problem is by finding the value of sum(i*arr[i]) without rotation using the formula:
`sum(k) - sum(k-1) = arr[0] + arr[1] + …. Arr[n - 1] - (n)*arr[n - k]`

## Code Explanation

- `t`: The number of elements in the array.
- `arr`: A vector that stores the array elements.
- `s`: Sum of the array elements.
- `curr`: The current calculated value based on the array elements and their indices.
- `ans`: The maximum value found.

The program first reads the number of elements and the elements themselves, then calculates the initial `curr` value. It iteratively updates `curr` and `ans` to find the maximum value.


