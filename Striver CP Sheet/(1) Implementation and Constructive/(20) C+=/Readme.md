# C+=

[C+=](https://codeforces.com/problemset/problem/1368/A)

### Problem logic
When we see the problem for the first time the approach that comes to the mind is that we should choose the larger number among the two numbers and keep on adding the smaller number to it, but this will not give the minimum number of operations required to achieve the result, because the smaller number always remains constant in this case. The better approach is a greedy one in which we will always find the larger number among the two and add it to the smaller number, this way both the numbers increase and hence an increased number is added to each at every iteration and hence that will result in minimum number of operations.