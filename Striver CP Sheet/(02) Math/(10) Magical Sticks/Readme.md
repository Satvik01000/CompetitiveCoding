# Magical Sticks
[Magical Sticks](https://codeforces.com/problemset/problem/1371/A)

### Problem Logic
Answer would be the ceil of n/2 because

- You start with n sticks.

- Every operation reduces the count by 1 (combine 2 → get 1).

- So after ⌊n/2⌋ combines, you’ll have n - ⌊n/2⌋ sticks left.

- That number = ceil(n / 2)