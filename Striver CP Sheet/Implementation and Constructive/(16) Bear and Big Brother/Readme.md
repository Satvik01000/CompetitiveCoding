# Bear and Big Brother
[Bear and Big Brother](https://codeforces.com/problemset/problem/791/A)

### Problem Logic
Pretty simple this one also just iterate in an infinite loop untill weight of Limak > weight of Bob, at every iteration `Weight of Limak*=3` and `Weight of Bob*=2`

The time complexity for this is `O(log(b/a))`, where `b` is the weight of Bob and `a` is the weight of Limak, .this can be calculated as we need to find out when `a*(3^n) > b*(2^n)`, now rearange it to make it `(3/2)^n > b/a`, then take log to make it `n * log(3/2) > log(b/a)` then rearranging it becomes `n > log(b/a) / log(3/2)`, hence TC is `O(log(b/a))`.