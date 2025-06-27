### Unit Array
[Unit Array](https://codeforces.com/problemset/problem/1834/A)

### Problem Logic
We will count the number of `-1's`, if `-1's` are even in number then we get a positive as an answer by multiplying them otherwise negative, and we can mathematically see that if we change sign of one `-1`, the sum reduces by `2`, so we will traverse `while(negativeCount>=0)` and we will return the number of operations moment the `sum≥0` and `negativeCount` is even.