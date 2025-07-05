### Sum of Medians
[Sum of Medians](https://codeforces.com/problemset/problem/1440/B)

### Problem Logic
First things first it is not mentioned in the problem but from the examples it is quite clear that the splits that we make should as well be sorted because if they are not we can just pick the `k` largest numbers and somehow arrange them to be at the median positions and hence just return the sum of `k` largest elements as the ans.
So, because of above now we need to make an obeservation given an array the median will lie at `(n/2)th` position so in each of the `k` arrays we need to ensure that we take the element which maximizes our `sum`, in simpler words if I pick an element from the array it should atleast have `n/2` elements which are greater than it only then I can pick it, so we traverse the whole of `nums` starting from `size-interval-1`, where `size=n*k`, `interval=n/2`.