# Drazil and Date
[Drazil and Date](https://codeforces.com/problemset/problem/515/A)

### Problem Logic
As he can only move horizontally or vertically so number of steps needed will be `abs(a) + abs(b)`, now if this min number of steps is `> s` straight up return a `No`, but if it is `< s` then check if `(s - minSteps) % 2 == 0)` if this is true then return a `Yes` else a `No`, this is because if this number is even and he has reached the location but went ahead by say `x` steps then he would need exactly `x` steps to return which makes the total count `2x` for a returnal, and `2x` is an even number, hence proved.