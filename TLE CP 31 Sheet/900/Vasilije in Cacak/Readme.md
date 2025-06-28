### Vasilije in Cacak
[Vasilije in Cacak](https://codeforces.com/contest/1878/problem/C)

### Problem Logic
If `x` is between the sum of first `k` numbers i.e. the minimum sum and the sum of last `k` numbers i.e. the maximum sum, then we can achieve any `x`. We will calculate sum using the AP formula which is `S=n*(a+l)/2`, so for the first `k` elements, sum is `k*(1+k)/2`, for the last `k` it will be `k*(n + (n-(k-1)))/2` dry run and check and count the numbrs of elements if having any doubt.