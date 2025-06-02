# Beland Poker
[Beland Poker](https://codeforces.com/problemset/problem/1359/A)

### Problem Logic
First of all we assign maximum number of jokers to one player which is `min(m, cardsPerPlayer)`, then we need to calculate the max number of jokers the other player can have for that first calculate `int remainingJokers = m - maxJokers`, now we will divide the jokers among the remaining players evenly one by one, suppose see the example in the question which is `9, 6, 3`. The `cardsPerPlayer = 3`, so to one player `3` jokers are assigned, now two players remain and 3 jokers remain:-

_ _
1 1
1

Now total 3 remaining jokers are assigned one by one to each player resulting in `2` as maximum number of jokers that can be assgined to another player. This can be calculated as `ceil((double)remainingJokers / (k - 1))`.

### Why ceil(remainingJokers / (k - 1))?
We don’t care how the remaining jokers are split — we only care about the maximum jokers any one of the other players might get.

This is essentially asking:
```
If I distribute remainingJokers as evenly as possible
across k - 1 players, what’s the largest any of them might get?
```
And this is exactly what ceiling division does.
Why? Because if you have `a` items to divide among `b` buckets:

`ceil(a / b)`

🔍 Concrete Example: `remainingJokers = 3, k - 1 = 2`
We want to distribute 3 jokers among 2 players:

Evenly would be: 1.5 jokers each

Since we can't split a card, the max one of them might get is 2

So ceil(3 / 2) = 2 — correct.