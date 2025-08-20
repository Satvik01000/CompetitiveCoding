### Divan and a New Project
[Divan and a New Project](https://codeforces.com/problemset/problem/1614/B)

### Problem Logic
What we will do in this problem is take the frequency array as input but store the frequency along with it's index, in this question store it in a `1-based` indexing format. Now what we will do is sort this array in decending order of frequency, this way at the first we have the most frequently visited building, our goal is to minimize walking so we will keep this building nearest to `0`. So what we will do is place `0` at the `0th` position, then we will place the most frequently traveled building at `1st` position, the second most frequently traveled at `-1th` position, third most frequently traveled at the `2nd` position and so on.