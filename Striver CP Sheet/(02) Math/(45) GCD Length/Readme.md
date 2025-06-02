# GCD Length
[GCD Length](https://codeforces.com/problemset/problem/1511/B)

### Problem Logic
What we want to do in this is first of all get the minimum `c` digit number and make it the GCD of both the numbers. Now we will select two numbers such that they have no multiple commong other than the GCD. For that as in the code we :

```cpp
    long long g = pow(10, c - 1);
    long long x = g * pow(10, a - c);
    long long y = g * (pow(10, b - c) + 1);
```

`x` has `a-c` digits because multiplying by `g` it already has `c` digits, similar reasson for `y`. We add a `1` to `y` so that x and y have no number but the assumed GCD as common multiple.