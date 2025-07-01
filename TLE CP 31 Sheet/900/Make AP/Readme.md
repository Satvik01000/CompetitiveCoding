### Make AP
[Make AP](https://codeforces.com/problemset/problem/1624/B)

### Problem Logic
We will have three cases, first case we have to multiply to `a`, in that case `b` and `c` are already in AP, so we can extract common difference `d` from them, then check 
```cpp
    int realA = b-d;
    if(realA<=0 || realA%a!=0) case1=false;
```
As we can only multiply by positive integer so the answer cannot be negative, and `realA` should be something we can achieve by multiplying something to `a`, in Case - 2 we will do similar thing considering we have to multiply to `c`.
For Case - 3, we will consider multiplying to `b` for that we will form two equations
```
    a+d=b
    c-d=b
```
From this we get `b=(a+c)/2`, now as we can multiply only by an integer so `(a+c)` should be even to not get a decimal result, now if it is even then we will check 
```cpp
    int realB = (a+c)/2;
    if(realB%b!=0) case3=false;
```
Now in the end 
```cpp
    if(case1 || case2 || case3) return "YES";
    return "NO";
```