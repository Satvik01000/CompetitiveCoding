### Luke is a Foodie
[Luke is a Foodie](https://codeforces.com/problemset/problem/1704/B)

### Problem Logic
[Watch the video but for code see the logic](https://youtu.be/B5BlhH5CUEA)
In this problem, each pile `a[i]` defines an interval `[a[i] - x, a[i] + x]` of possible values for Luke’s affinity `v` such that he can eat from that pile. For Luke to eat from several consecutive piles without changing `v`, all their intervals must overlap, which happens if `max(a[i]) - min(a[i]) ≤ 2x` for those piles. Instead of explicitly storing all intervals, we can just track the minimum and maximum values seen so far (`low` and `high`); if at any point the spread `high - low` exceeds `2x`, the overlap vanishes, meaning there is no single `v` that works for all these piles, so Luke must change his affinity before continuing. This is why the condition uses `2*x`: it represents the combined ±x flexibility from the smallest and largest pile values in the current segment.