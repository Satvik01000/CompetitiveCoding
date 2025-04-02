# Beautiful Matrix Problem
[text](https://codeforces.com/problemset/problem/263/A)

## Solution Logic
1. **Identify the Position of `1`:**
   - Traverse the matrix to find the position `(i, j)` where the number `1` is located.

2. **Calculate the Moves:**
   - Since the matrix is always 5x5, the center is fixed at `(2, 2)`.
   - The number of moves required to bring `1` to the center is calculated as:
     ```
     count = abs(2 - i) + abs(2 - j)
     ```

3. **Return the Result:**
   - Return count as the result.
