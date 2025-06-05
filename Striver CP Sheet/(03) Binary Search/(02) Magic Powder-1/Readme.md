# Magic Powder - 1 
[Magic Powder - 1 ](https://codeforces.com/contest/670/problem/D1)

### Problem Logic
- **First of all why Binary Search on this :**
We have `k` grams of magic powder and we can think can I make `x` amount of cookies with `k` grams of magic powder.

- **Now how to solve this :**
Just like in the previous hamburgers problem in which were given a string and then we calculate the need by counting `B`, `S` and `C` in the string, similarly in this we are given a `need` array and `have` array. In this as well same logic will be applied.

Now how to verify can we make `mid` number of cookies or not, for that we will traverse the `need` array and find out the need of each ingredient for `mid` number of cookies as `ll required = x * need[i]`, now 

```cpp
if (required > have[i])
    totalPowder += required - have[i];
```
`return totalPowder <= k`