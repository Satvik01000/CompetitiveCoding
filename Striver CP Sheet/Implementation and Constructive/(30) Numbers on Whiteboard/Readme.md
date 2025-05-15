# Number on Whiteboard
[Number on Whiteboard](https://codeforces.com/problemset/problem/1430/C)

### Problem Logic
We will follow a greedy approach in this one, we need to reduce the size of the final number that we get for that we will need to start decreasing from the largest element, so we will at every step take the largest element and the second largest element and reduce them by `(a+b)/2`, see code to understand better.