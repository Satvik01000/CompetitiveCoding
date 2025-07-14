### Raspberries
[Raspberries](https://codeforces.com/problemset/problem/1883/C)

### Problem Logic
What we need to do to make the whole product divisible by `k` is have atleast one occurence of `k` or it's multiple in the array. So for that what we will do is while taking input we will take care of 2 things, the `evenCount` and `ans`, `evenCount` is what the name suggests `ans` is 
```cpp
    int rem = i%k;
    ans = rem == 0 ? 0 : min(ans, k-rem);
```
Now if `k` is 2 we just need one even number to make the whole product divisible by 2, if `k` is 4 then we have a case firstly if `evenCount>=2` then return 0, otherwise we will return `min(ans, 2-evenCount)`. What is the meaning of this is if say `evenCount` is 0 and we have numbers like 3 or 7 etc in the array then answer should be 1, but if we don't take the minimum of ans, 2-evenCount, 2 will be returned which is incorrect, and for k=3 or k=5, there is no specificity we will return ans.