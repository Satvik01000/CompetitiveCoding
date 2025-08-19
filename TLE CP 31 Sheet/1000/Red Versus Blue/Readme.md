### Red Versus Blue
[Red Versus Blue](https://codeforces.com/problemset/problem/1659/A)

### Problem Logic
What we do in this problem is we will split `B's` in a pair of one consecutive win. After this we can clearly see that we have `b+1` spaces to fill all `r` `R's` with. 
For example say we have `r=5` and `b=2`
```
_ B _ B _ 
```
We can clearly see we have `b+1` spaces to fill all the `R's` with. This is a better idea than grouping `B's` also because it increases the number of groups and hence group size of each group can be minimized.

What we do is divide the Rs into b+1 groups (since there are b Bs, which create b+1 gaps). In each step, we place r / (b+1) Rs in the current gap, then place one B. After placing, we update r by subtracting the number of Rs we just used. This process continues until all Bs are placed, and finally, any remaining Rs are added at the end.