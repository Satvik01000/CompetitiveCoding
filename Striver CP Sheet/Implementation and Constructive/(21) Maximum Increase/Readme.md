# Maximum Increase
[Maximum Increase](https://codeforces.com/problemset/problem/702/A)

### Problem Logic
First of all there is no need for Dynamic Programming in this because it asks for subarrays and not subsequences, subarrays are contiguous, so what we will do is traverse the array and if the previous element is smaller than the current element then size++ else `maxSize=max(maxSize, size)` and `size=1`, yes 1 because if there is even one element in the whole array answer will be one.