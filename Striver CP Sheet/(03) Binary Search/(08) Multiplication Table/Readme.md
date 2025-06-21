# Multiplication Table
[Multiplication Table](https://codeforces.com/contest/448/problem/D)

### Problem Logic
- **First of all why Binary Search on this :**
We have a range of numbers who are row-wise sorted and amongst them we need to find the kth largest number

- **Now how to solve this problem :**
What we do is apply binary search on the range `1` and `n*m`, i.e. the minimum and maximum possible number in any test case. Then we calculate `mid` and try to verify wether this can be the kth largest number or not.

For the purpose of verification what we will do is move over each row and try to find how many elements in this particular row is our `mid` greater than for example if `mid=3` and we are on `row=2`, `3/2=1`, so mid is greater than or equal to just one element in this row, now when we move to the third row `3/3=1`, the mid is once again greater than or equal to just one element in this row, finally when we go to 4th row `3/4=0`, so from now on the mid will not be greater to any other element in any further row so we break out of the loop.

```cpp
    for (ll i = 1; i <= n; i++){
        if(x/i==0)
            break;
        count += min(x / i, m);
    }
```
What we do in this loop is go row by row and find how many numbers is our mid greater to, we do a `min(x/i, m)` because a row has at max `m` columns, and we don't want to overcalculate.