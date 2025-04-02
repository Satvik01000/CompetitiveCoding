[text](https://codeforces.com/contest/514/problem/A)

The key to solving this problem is to first of all analyze the outputs.

When given `27`, the output is `22`.  
That is because of the digit `7`:  
`9 - 7 = 2` was placed, but we see `2` was not subtracted from `9`,  
as `9 - 2` would result in `7`, which would make the number larger, which is not what we need.

So we see one thing from here:  
9-1=8
9-2=7
9-3=6
9-4=5
9-5=4
9-6=3
9-7=2
9-8=1
9-9=0

We can clearly see that any number before `5` if subtracted from `9` will result in a number greater than `9`,  
so we will only invert the digits that are greater than or equal to `5`.  

Also, one thing to be noted is that the leading place should not have any `0`s.  
This implies that if `9` is at that place, leave it as it is—don't subtract from it.  

Another thing to note is the max size of the input, which is too large.  
So we won't even be using `long long` but will be taking input directly as a string.
