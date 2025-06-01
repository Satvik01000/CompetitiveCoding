# Diverse Substring
[Diverse Substring](https://codeforces.com/problemset/problem/1073/A)

### Problem Logic
First thing n/2 is to be taken and compared with respect to the size of the substring and not the string. As the problem says we don't need to find max size, min size, or any other simulation, we just need to check if such a substring exits, and if a substring of size 2 does not exists, substring of size more than 2 cannot exist, so just 

```cpp
for (int i = 1; i < s.size(); i++) {
    if (s[i] != s[i - 1]) {
        cout << "YES" << endl << s.substr(i - 1, 2) << endl;
        return 0;
    }
}
```

if this does not fit just print `NO`