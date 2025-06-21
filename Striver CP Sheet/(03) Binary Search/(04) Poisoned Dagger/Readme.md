# Poisoned Dagger
[Poisoned Dagger](https://codeforces.com/problemset/problem/1613/C)

### Problem Logic
- **First of all why Binary Search on this :**
We can think of values from 1 to LLONG_MAX and see if a particular damage in that is a valid one, hence Binary Search is applicable.

- **Now how to solve this :**
We will start with `low = 1 and high = h`, i.e. min damage should be `1` and max damage should be `h`. We calculate `mid` and try to see if that amount of damage can slay the dragon. If yes then we do `ans = mid, high = mid - 1` else `low = mid+  1`.

Now how do we verify wether that amount of damage can slay the dragon or not. For that we make a seperate function whose logic is pretty clear from the code itself.

```cpp
bool canSlay(ll x, vector<int>& attackTimes, int n, ll h){
    ll hp=0LL;
    for(int i=0; i<attackTimes.size()-1; i++)
        hp+=min(x, 1LL*abs(attackTimes[i]-attackTimes[i+1]));
    hp += x; // Include full poison duration for the last attack
    return hp>=h;
}
```
