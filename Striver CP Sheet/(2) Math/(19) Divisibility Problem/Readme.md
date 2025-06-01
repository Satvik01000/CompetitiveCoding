# Divisibility Problem
[Divisibility Problem](https://codeforces.com/problemset/problem/1328/A)

### Problem Logic
Division is continuous substraction hemce `a%b` will give a remainder, when this remainder is subtracted from `a` we get number which is divisible by `b`, but we need to add not subtract so other way is if we do `b-(a%b)` then we will get minimum number that we should add to make `a` divisible.