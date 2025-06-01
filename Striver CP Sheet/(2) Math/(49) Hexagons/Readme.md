# Hexagons
[Hexagons](https://codeforces.com/problemset/problem/630/D)

### Problem Logic
This problem only looks and feels scary, we need to calculate the number of hexagons that will be affected by the magic move, and those that will be affected are the one's touching the base hexagon and those touching the one's that are directly or indirectly being touched by the base hexagon until we reach the distance `n`.

So now that we have understood the problem we can see in the given picture that each layer of hexagons are in multiples of 6, the first layer has `6` hexagons, the `2nd` has `12` and so on, so this problem turns into calculate the sum using AP when first element is `6`, we will just apply the summation of AP formula and get the result, use long long due to big size of n.