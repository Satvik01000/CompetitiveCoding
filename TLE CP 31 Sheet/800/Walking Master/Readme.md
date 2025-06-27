### Walking Master
[Walking Master](https://codeforces.com/problemset/problem/1806/A)

### Problem Logic
In this problem we have no possible way to reduce `y-coordinate` so if target's `y-coordinate` is lesser than the current one `return -1;`. Now what we will do is we will first of all try to satisfy the `y-coordinate` so we will first of all do `moves+=(d-b);`, then we will see if after all these moves wether `a>c` or not by
```cpp
    a+=moves;
    if(a<c) return -1;
    moves+=(a-c);
```
Then return moves.