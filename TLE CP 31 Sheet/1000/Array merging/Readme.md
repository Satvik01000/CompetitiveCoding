### Array Merging
[Array Merging](https://codeforces.com/problemset/problem/1831/B)

### Problem Logic

In this problem, we calculate the maximum possible consecutive occurrences of each number in both array `a` and array `b`.

If we dry-run the process, we can clearly see that we can achieve the desired result by appropriately positioning these consecutive elements during merging.

For example, if
`a = {2, 2, 1, 2, 2, 1}` and
`b = {1, 1, 1, 2, 1}`,

we find that the maximum consecutive frequency of `2` in array `a` is `2`, and for `1` it is `1`.
In array `b`, the maximum consecutive frequency of `2` is `1`, and for `1` it is `3`.

To maximize consecutive equal values, we can take the first two `2`s from `a`, then the next element `1`, and then take the first three `1`s from `b`.
This results in **4 consecutive `1`s**, which is the highest possible in any valid merge.

The reason we only consider the maximum consecutive counts from each array is that our goal is to form the **longest subarray consisting of identical values**.