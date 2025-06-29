### Comparision String
[Comparision String](https://codeforces.com/problemset/problem/1837/B)

### Problem Logic
Well the logic is pretty simple if we have the same sign for two consecutive numbers we will have to increment the count as we will have to insert a new number, otherwise we can simply reuse the previous value and as we will start reusing previous values now count is again back to 0. The answer would be max(count, ans);