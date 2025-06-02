# Hamburgers
[Hamburgers](https://codeforces.com/contest/371/problem/C)

### Problem Logic
- **First of all why Binary Search on this**
“Can I make x hamburgers with the stock I have and r rubles?”
This gives us an intution on applying Binary Search, we can apply Binary Search on answers on the range that can we make at least one burger and can we make at most infinite burgers, hence giving us the range.

- **Now how to solve this**
In every string we would calculate the needed amount of `B`, `S` and `C`, then we will apply Binary Search, for checking can we make `mid` number of burgers with these amount of ingredients and these amount of Rubels, if yes then we say `ans=mid and low = mid + 1` because we need the max amount of burgers, otherwise we do `high=mid-1`.

Now how to verify can we make `mid` number of burgers or not, for that make a seperate function, calculate `totalRemainingNeededB` as `totalRemainingNeededB = max(0, mid*needB - nb)`, i.e. we have to make mid amount of burgers, for that we need `mid*needB` bread, and we already have `nb` number of bread, so `totalRemainingNeededB` is what is needed minus what we have, in case this is negative i.e. bread is not at all required for example the string may be `SSCC`, no bread required then `totalRemainingNeededB` is `0`.
We do the similar for `S` and `C`. Then we calculate the total cost of all this need as

`ll cost = totalRemainingNeededB * pb + totalRemainingNeededS * ps + totalRemainingNeededC * pc`

Now `return cost <= r`