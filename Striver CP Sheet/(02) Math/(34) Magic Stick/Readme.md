# Magic Stick
[Magic Stick](https://codeforces.com/problemset/problem/1257/B)

### Problem Logic
This problem is purely based on observation and handling edge cases, the main crux in this problem is that if we cannot make `x` equal to `y` just by multiplying it with `3/2` everytime can we somehow make it greater than `y` because after that we can always do `a-1` and get the desired result, so what we can observe is that any number greater than or equal to `4` when these two magical spells are applied to it, the number will always increase so for any number which is `≥4` return a `YES` but we will need to also handle many edge cases which can be seen in the code.