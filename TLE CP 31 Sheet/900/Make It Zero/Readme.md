### Make it Zero
[Make it Zero](https://codeforces.com/problemset/problem/1869/A)

### Problem Logic
[Watch this video](https://youtu.be/947A8pHcqvs)
The logic is fairly straightforward. We need to choose two indices, compute the XOR of all the elements between those indices, and then replace all the elements with that XOR value. The goal is to ultimately make all elements equal to `0`.

For even-sized arrays, we only need a maximum of 2 operations. So, we print `2`, then print `1 n`, and again print `1 n` — i.e., the first and last indices. Since the array has an even number of elements, each pair will cancel out through XOR, resulting in `0`.

For odd-sized arrays, we print `4`, then print `1 n-1`, and the rest can be understood better by looking at the code.