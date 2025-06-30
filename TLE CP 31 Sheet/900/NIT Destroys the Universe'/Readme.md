### NIT Destroys the Universe
[NIT Destroys the Universe](https://codeforces.com/problemset/problem/1696/B)

### Problem Logic
Pretty simple if there is a zero or zero's in between apart from trailing and leading zero's, what we will do is choose the index just after the leading zero's and just before the trailing zero's and then perform the mex(s) operation on them, then once again select from those same indices again this time the smallest non-negative number will be 0 and hence we need atmost 2 and atleast 0 operations for out task.