# Shuffle Hashing
[Shuffle Hashing](https://codeforces.com/problemset/problem/1278/A)

### Problem Logic
For this problem use a sliding window technique along with two arrays of size 26 as this only contains lower case english alphabets, in the first vector insert all the characters of given password, then in the given hash use sliding window approach with window size equals to the size of the given password, now use a sliding window approach insert and delete the contents of the window in the other hash, if any time the two vectors match return a YES.