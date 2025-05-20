# Floor Number
[Floor Number](https://codeforces.com/problemset/problem/1426/A)

### Problem Logic
```
if(n==1 || n==2)
    return 1;
```
because the first floor contains only two apartments `1` and `2`.
Now for the other floors make two variables `floorNumber=2, maxApartmentNumber=2+x;`, in this `maxApartmentNumber` represents the maximum apartment number a floor can have, now we go on every floor and increment `maxApartmentNumber` by `x` as and if `n<=maxApartmentNumber` return the current `floorNumber`.