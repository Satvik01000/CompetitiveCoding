# Dice Tower
[Dice Tower](https://codeforces.com/problemset/problem/1266/B)

### Problem Logic
This question is based on sheer observation, in a die `1 and 6` can be opposite to each other similarly `2 and 5`, `3 and 4` can be opposite to each other. Placing one die over other means two faces will be covered and the top one will have one face visible compared to other dice. So if we remove any pair of numbers listed above no matter what the sum will always be 14 we can try

- Hiding `1` and `6`
    `sum=2+3+4+5=14`

- Hiding `2` and `5`
    `sum=1+3+4+6=14`

- Hiding `3` and `4`
    `sum=1+2+5+6=14`

Hence we will first check if the number is >=15 and if it's `x%14` is between 1 and 6 (inclusive), if so then print `YES` because we can always make the top face equal to remainder.