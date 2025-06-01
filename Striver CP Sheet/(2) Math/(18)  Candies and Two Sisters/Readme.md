# Candies and Two Sisters
[Candies and Two Sisters](https://codeforces.com/problemset/problem/1335/A)

### Problem Logic
If `n` is odd we return `n/2` because we are taking two numbers at a time so number of ways to represent `n` as a sum of two numbers  will be `n/2`, when `n` is even in that case also we return `n/2` but we return `n/2 - 1` because according to the problem on sister get's more candies than the other sister when `n` is even then in that case `n/2 + n/2 = n`, that makes both the sisters have equal amount of candies which is invalid.