# Number Circle
[Number Circle](https://codeforces.com/problemset/problem/1189/B)

### Problem Logic
Let's suppose that array is sorted. First of all, if 𝑎𝑛≥𝑎𝑛−1+𝑎𝑛−2, than the answer is — NO (because otherwise 𝑎𝑛 is not smaller than sum of the neighbors). We claim, that in all other cases answer is — YES. One of the possible constructions (if the array is already sorted) is:

𝑎𝑛−2,𝑎𝑛,𝑎𝑛−1,𝑎𝑛−4,𝑎𝑛−5,…,𝑎1

It's easy to see, that all numbers except 𝑎𝑛 will have at least one neighbor which is not smaller than itself. Complexity 𝑂(𝑛𝑙𝑜𝑔(𝑛)).

i.e. if that is possible than we can arrange the array so that it is possible.