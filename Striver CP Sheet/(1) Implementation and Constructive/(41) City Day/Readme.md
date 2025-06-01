# City Day
[City Day](https://codeforces.com/problemset/problem/1199/A)

### Problem Logic
In this problem, the values of `x` and `y` are very small, so a brute-force approach is simple and intuitive.  
If the values of `x` and `y` had been large, we would need a more advanced approach.

**Advanced approach:**
- Use a sliding window to maintain the minimum in the range `d - x` to `d - 1`.
- Similarly, check the range from `d + 1` to `d + y`.
- Precompute prefix and suffix minimum arrays for **O(n)** preprocessing, then check for every `d` in **O(1)**.