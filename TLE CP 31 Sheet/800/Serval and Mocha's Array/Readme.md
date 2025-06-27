### Serval and Mocha's Array
[Serval and Mocha's Array](https://codeforces.com/problemset/problem/1789/A)

### Problem Logic
First of all what we need to do in this question is make the array beautiful, this means prefixes of all the lengths should be good, then the array is beautiful.

The principle of GCD Prefix monotonicity will be used in this see more about it in Algorithm copy, in essence it is if we get say GCD of a prefix = 2, now when we increase the size of the prefix, i.e. take the prefix of larger sizes the GCD will either remain same or decrease it will never increase.

So for this problem if we can find `2` numbers whose `GCD≤2` (because for prefix of `size=2` we need `GCD` as 2), then we can rearrange the array and bring those numbers at the first and second position of the array and now the `GCD` will never increase beyond `2`, hence all the other prefixe's will also become good and hence the array will become beautiful.