### Swap and Delete
[Swap and Delete](https://codeforces.com/problemset/problem/1913/B)

### Problem Logic
This is very simple we will count the `0's` and `1's` in the string `if(zeroCount==oneCount) return 0` otherwise what we will do is traverse in the string, now when we encounter a `1` what we need is a `0` to make `s[i] != t[i]`, so `if(s[i]=='1' && zeroCount>0)` then we will increment the count or ans variable and do vice versa in case we encounter a `0` instead of a `1`. In the case we encounter `1` or `0` and the count of the opposite is not greater than zero, we will break and in end we will return n-ans.

[Watch the video if still did not understand](https://youtu.be/JM-LLGuqiyw)