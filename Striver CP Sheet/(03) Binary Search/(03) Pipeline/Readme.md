# Pipelines
[Pipelines](https://codeforces.com/contest/287/problem/B)

### Problem Logic
- **First of all why Binary Search on this :**
We need to produce `n-1` pipes and we have `k-1` splitters, now we need to find min number of splitters needed here so that we can produce `n-1` pipes, we can think of it like this if I have `s` splitters can I produce `n-1` pipes with it that is why we will use Binary Search on it.

- **Now how to solve this :**
First of all we need to find the range on which we will apply binary search, `low=1` this is beacause we are starting with 1 pipe. Now main crux is in finding `high`, `high=min(n-1, k-1)`, this is because `n-1` represents the number of pipes we need, so we never go beyond what we need, `k-1` represents the number of spitters we have which is `k-1`, so we don't use more splitters than what we have.

Now simple binary search on answers logic if we can make with mid number of splitters then `high=mid-1` because we need min number of splitters that get the task done. In the end return answer.

Now how do we verify wether we can make `n-1` pipes with `mid` number of splitters or not.
For that we make a `canMake(ll n, ll k, ll s)` function. First thing to check before doing anything in this function is `if (s > k - 1) return false;` this is to ensure we never use more splitters than what we have. Then what we will do is we will greedely choose `s` largest elements, i.e. `k-1, k-2, k-3, -----, k-s`, this is to ensure we will reach our goal in min number of splitters. So we need to figure out the number of pipes produced by `s` largest splitters, and this is an AP so we can use the formula of summation of AP, which is `S=n/2(a+l)`, where `a` is first term, `l` is the last term, `n` is the number of elements and `S` is the summation.
So for our case the summation formula will be as we have `s` elements
```cpp
    ll first = k - 1;
    ll last = k - s;
    ll totalPipes = s * (first + last) / 2;
```
Then finally return this `return totalPipes >= n - 1;`