# Repeating Ciphers
[Repeating Ciphers](https://codeforces.com/problemset/problem/1095/A)

### Problem Logic
The main thing in this is that we will not do `i++` in the for loop we will do `for(int i=0; i<t.size(); i+=count, count++)` and initially `count=0`.