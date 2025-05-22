# Emotes
[Emotes](https://codeforces.com/problemset/problem/1117/B)

### Problem Logic
We need to find the largest and the second largest number, add the largest number `k` times to the `sum`, then add the second largest number one time to the `sum`. That was the main logic of this problem now to do this in an optimal way we will find the 

```cpp
    long long numberOfGroups = m / (k + 1);
    long long remaining = m % (k + 1);
    long long sumOfOneGroup = 1LL * k * largest + secondLargest;
```

For example m=9, k=5
then `number of groups =1`, i.e. just one full group,
the `remaining = 4`, i.e. add largest number remaining times.