### Desorting

[Desorting](https://codeforces.com/problemset/problem/1853/A)

### Problem Logic

To achieve our goal, we need to find the minimum possible difference between any two elements in the array. If the difference is even, the number of operations required will be `(difference / 2) + 1`; otherwise, it will be `(difference + 1) / 2`. This is because, after each increment on the left side and decrement on the right side, the difference decreases by `2`. For example, if the difference is 4:

* Step 1: 2
* Step 2: 0
  Then, one additional step is needed to desort the array:
* Step 3: -2

But in the case of an odd number, say the difference is 5:

* Step 1: 3
* Step 2: 1
* Step 3: -1