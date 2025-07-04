### Strange Partition

[Strange Partition](https://codeforces.com/problemset/problem/1471/A)

### Problem Logic

The **maximum beauty** is obtained by performing the ceiling operation on each element **individually** and summing up the results. This is because `ceil(ai / x)` is always greater than or equal to `(ai / x)`, and applying it per element accumulates the rounding effect.

The **minimum beauty** is achieved by first summing all elements of the array and then applying the ceiling operation **once** on the total sum. This essentially merges all values into a single partition and minimizes the impact of rounding.

We can think of it like this:

* Suppose all elements `ai` are less than or equal to `x`. Then `ceil(ai / x)` will be 1 for each, and summing them gives `n`.
* But `ceil((a1 + a2 + ... + an) / x)` can be much smaller than `n` due to the combined value being divided more efficiently by `x`.

Even when some elements are greater than `x`, the same principle holds — computing `ceil(ai / x)` for each element separately often yields a **larger** result than computing it once on the total sum.

This is why:

* **Minimum beauty** = `ceil(sum of all elements / x)`
* **Maximum beauty** = `sum of ceil(ai / x)` for all `i`