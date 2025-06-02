# Most Unstable Array

[Most Unstable Array – Codeforces Problem 1353A](https://codeforces.com/problemset/problem/1353/A)

### Problem Logic

```cpp
if(n == 1)
    cout << 0 << endl;
else if(n == 2)
    cout << m << endl;
else
    cout << 2 * m << endl;
```

- **Case 1: `n == 1`**  
  The maximum difference can only be zero as there is just one element, so no consecutive elements to calculate differences.

- **Case 2: `n == 2`**  
  Place one element as `m` and the other as `0`. The maximum possible absolute difference is `|m - 0| = m`.

- **Case 3: `n ≥ 3`**  
  In this case, we can prove that the maximum possible sum of absolute differences is `2 * m`.

### Proof for `n ≥ 3`

To maximize the sum of absolute differences, you should alternate between `0` and `m` — the two extremes — as much as possible.

#### Example Pattern:

```
[0, m, 0, m, ..., 0 or m] of length n and total sum = m
```

To satisfy the total sum being `m`, we can assign `m` to just one index and `0` to all the others. For example:

```
[m, 0, 0, 0, ..., 0]
```

Now compute the variation:

```
|m - 0| + |0 - 0| + |0 - 0| + ... = m (only one jump)
```

This is small and not optimal.

Instead, place `m` in one position and alternate with `0` as early as possible. For example:

```
[0, m, 0, 0, ..., 0]
```

Now the absolute differences become:

```
|0 - m| + |m - 0| = m + m = 2m
```

This is the **maximum achievable**.

### Conclusion for `n ≥ 3`:

We can always construct an array like:

```
[0, m, 0, 0, ..., 0]
```

- The total sum is `m`, and all elements are non-negative.
- Adjacent absolute differences: `|0 - m| + |m - 0| = 2m`

We cannot do better than `2m` because:

- The only non-negative way to cause variation is by jumping between `0` and `m`.
- The maximum possible jump in either direction is `m`, so total variation can be at most `m + m = 2m`.