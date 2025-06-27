### Grasshopper on a Line
[Grasshopper on a Line](https://codeforces.com/problemset/problem/1837/A)

### Problem Logic
If `x` is not divisible by `k` we can reach in just one jump, if it is then we will still need just two jumps. Mathematically we know it is never possible that `k-1` will be divisible by `k` for all `k>1` and in our problem the constraints satisfy this as `k≥2` so what we will do is print `2` then in next line print `x+(k-1)`, then print `-1*(k-1)`.