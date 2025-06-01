# Balanced Array
[Balanced Array](https://codeforces.com/problemset/problem/1343/B)

### Problem Logic
The main thing to figure out in this problem is when the answer will be a `YES` and when will it be a `NO`, if `n/2` is odd the answer cannot be a `YES`. This is because the array will be split in two parts

for example

`_ _ _ _ _` and `_ _ _ _ _`

one half has to have even numbers and the other half has to have odd numbers, now no matter how many even numbers one puts if they are added odd times answer will always be even, which will not be true for the other part as no matter how many odd numbers one adds if they are odd times answer will always be an odd number, hence both sides can never be equal.

Now if `n/2` is even then, first print a `YES`, then print the first `n/2` even numbers, now the sum of first `n` even numbers is `n*(n+1)`, hence for `n/2` numbers it will be `(n/2) * (n/2 + 1)`. Now print first `n/2 - 1` odd numbers, `n/2-1` because we need to have flexibility for what the last number should be so it will be the sum of first `n/2` even numbers minus the sum of the first `n/2 -1` odd numbers till now, and it will be a gurantee that it will always be an odd number, this is because sum we need to obtain is even, `n/2 - 1` is odd as `n/2` is even so odd numbers summed odd times always results in a odd number, hence sum till now is also odd, and to obtain sum is even, even minus odd is always odd.
