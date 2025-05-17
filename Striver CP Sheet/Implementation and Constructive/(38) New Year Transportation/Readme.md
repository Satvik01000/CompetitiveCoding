# New Year Transportation
[New Year Transportation](https://codeforces.com/problemset/problem/500/A)

### Problem Logic
The question is pretty simple it has a werid language and indexing given in problem language is 1-based so first of all convert that to 0-based by doing a `t--`, now use a while loop and traverse till `pos<t` and `pos<arr.size()`, after the loop completes check if `pos==t` if yes then print `YES` else `NO`.