# Mike and Chocolate Thieves
[Mike and Chocolate Thieves](https://codeforces.com/contest/689/problem/C)

### Problem Logic
Suppose the first thief steals `a` items then the ways in which stealing can happen is `a + a*k + a*k^2 + a*k^3` or `a(1 + k + k^2 + k^3)`. This represents number of ways because number of such valid operations is number of ways. Now each thief cannot steal more than `n` chocolates, we also know that `a` and `k` are both positive integers so `a*k^3` will be the largest number and if `a*k^3<=n`, then all the others would as well be `≤ n`, so
```
a*k^3<=n
a<=n/k^3
```
By this `a` can have infinite values, because `n` and `k` can have infinite values. But as `a` is an integer and we are only talking in integer terms in this problem i.e. no thief can steal a fraction of a chocolate, this means `n/k^3` is actually `floor(n/k^3)`, so actually `a` has integer values from `2 <= a <= floor(n/k^3)`, just a reminder `a` also represents the number of ways. So number of ways to steal this way are between `2 and ∞` but that is actually not true because we are using the floor function and for any value of `k^3 > n` so number of ways are actually not between `2 and ∞` but between `2 and n^1/3`.

Now in the question we are given that the number of ways the thieves can steal is known and we need to find the value of n. So we will Binary Search on valid values of `n`, i.e. we will see that for a particular value of `n` can we get `m` number of ways.