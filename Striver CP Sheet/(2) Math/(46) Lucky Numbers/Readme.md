# Lucky Numbers
[Lucky Numbers](https://codeforces.com/problemset/problem/630/C)

### Problem Logic
```
    n=1 -> 7, 8
    n=2 -> 77, 88, 78, 87
    n=3 -> 777, 778, 788, 888, 887, 877, 787, 878
    n=4 -> 7777, 7778, 7788, 7888, 8888, 8887, 8877, 8777, 7787, 7887, 7877, 7878, ----
```

From this it is pretty clear that for each value of `n` the number of values are 2^n, and to represent the number plate we need atmost `n` values, so we will add all the values for `n=1 to n=n(given n)` i.e.
`2^1 + 2^2 + 2^3 + ----- + 2^n`, for that purpose we will use the summation of GP for n numbers, and use long long.