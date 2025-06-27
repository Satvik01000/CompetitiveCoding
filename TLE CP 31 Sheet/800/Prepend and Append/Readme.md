### Prepend and Append
[Prepend and Append](https://codeforces.com/problemset/problem/1791/C)

### Problem Logic
Pretty simple problem, we will use two pointers and check if `s[i]==s[j]`, that is the point where no append or prepend had happend and that is the starting string, so now return `j-i+1`. In the code after the if() statement what is mentioned is mentioned to check for the case when i==j.