### Permutation Swap
[Permutation Swap](https://codeforces.com/problemset/problem/1828/B)

### Problem Logic
No matter what in every case `1` will always be an answer, this is because we can always keep on swapping with the consecutive number and somehow or other after maybe many operations get the array sorted. But what we want to do is find the maximum possible answer, so what we will do is in terms of dry running and building the intuition is on a paper write the array and the position it is misplaced by, what we will see is generally it is misplaced by numbers where we can find a GCD and get the work done, for example 
```
1 5 3 4 2 6 -> the original array
0 3 0 0 3 0 -> the place it is misplaced by

OR
1 11 6 4 8 3 7 5 9 10 2 -> the original array
0 9  3 0 3 3 0 3 0  0 9 -> the place it is misplaced by
```