### One and Two
[One and Two](https://codeforces.com/problemset/problem/1788/A)

### Problem Logic
We can think of making a prefixProduct array and a suffixProduct array to solve this but that would not be a good idea because `n` can be upto the length of `1000`, and the worst case we would get from that is `2^1000` which cannot fit even in an `unsigned long long` in C++, so we will need to think better. 

What we will do is number of `1's` never affect the product, so if prefixly and suffixly to any index if number of `2's` are same then that index is our answer.