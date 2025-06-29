### Jellyfish and Undertale
[Jellyfish and Undertale](https://codeforces.com/problemset/problem/1875/A)

### Problem Logic
What we do to solve this problem is first of all sort the given tools array, then what we will do is wait `b-1` seconds, i.e. the time till `b` becomes `1` and every time it becomes `1` we use the tool of the highest denomination we have to increment the timer but keeping in mind the bug we do `b=min(1+increment[i], a)`, `1+increment[i]` because we are adding `increment[i]` to the remaining time and at the time we choose to add it the remaining time is always `1`, this ensures maximum utilization.