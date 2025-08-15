### Distinct Split
[Distinct Split](https://codeforces.com/problemset/problem/1791/D)

### Problem Logic
What we do in this problem is use prefix and suffix arrays, using them what we do is calculate that if we split at this point how many unique variables we have encountered at this point and how many we will encounter after this and max of all of them is our answer. 

```cpp
    for(int i=0; i < n-1; i++) 
        ans = max(ans, prefix[i] + suffix[i+1]);
```