### Make it Zero
[Make it Zero](https://codeforces.com/problemset/problem/1869/A)

### Problem Logic
The logic is pretty simple we need to choose `2` indices calculate the XOR between them and then replace all the elements with that XOR and we need to ensure we get a `0` in the end, so for even numbers what we will do is print `2` as we would need at max `2` operations, then print `1 n`, again then print `1 n`, i.e. the first and the last index, because they will form pairs of two numbers each they will become `0`, for odd numbers we would print `4` print `1 n-1` then just see the code.