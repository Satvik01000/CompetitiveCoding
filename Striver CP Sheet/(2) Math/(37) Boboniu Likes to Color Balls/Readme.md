# Boboniu Likes to Color Balls
[Boboniu Likes to Color Balls](https://codeforces.com/problemset/problem/1395/A)

### Problem Logic
The main thing in this problem is number of balls having a odd count should be `≤1`, and if there is no such ball try to make it. In the code we can see only one operation is performed using the `if()` instead of a loop, this is beacause if after one operation it is not possible it won't even be possible in the consecutive operations.