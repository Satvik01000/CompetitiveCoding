# Middle of the Contest
[Middle of the Contest](https://codeforces.com/problemset/problem/1133/A)

### Problem Logic
Send hours and minutes as int to the middle finder function, then `if h1==h2` then just take the average of `m1` and `m2` and append everything together and send the answer, otherwise convert find `t1` and `t2` as `int t1=h1*60 + m1, t2=h2*60 + m2;`, now ans will be `int t3=(t1+t2)/2;`, the hour part of answer will be `t3/60` and the minute part will be `t3%60`, now just append everything and return.