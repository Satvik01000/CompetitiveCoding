### Mocha and Math
[Mocha and Math](https://codeforces.com/problemset/problem/1559/A)

### Problem Logic
First of all what we need to find in this problem, we need to perform the prescribed operation and then after perfoming all such operations we need to find the maximum possible number. Minimum possible number will be encountered when say the indices of the number's set bits are represented by `k`, so the number having lowest possible value of `k` will cause the minimum value to occur, so what we will do is perform the `&` over all the array and that way we will encounter that element while traversing.