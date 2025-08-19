### Shoe Shuffling
[Shoe Shuffling](https://codeforces.com/problemset/problem/1691/B)

### Problem Logic
The main thing in this problem is to identify that if any element occurs just once then a successful grouping is not possible, because say we have the array as :
`1 2 3 4 5`
In this `1` would take `2's` shoe, `2` would take `3's` shoe and so on but in the end `5` would have been left to take only one possible shoe which is the shoe of `1` but that would not be a valid exchange as anyone can take only a shoe of size greater than or equal to their own.

So what we will do is assign everyone shoes of size equal to their own but of a different student, we are given that the array is sorted in non-decreasing order so we will take groups of same sizes and cyclically reverse them, i.e. reverse indices like this
```cpp
for(int k = 0; k < len; k++)
    ans[i + k + 1] = i + ((k+1) % len) + 1;
```