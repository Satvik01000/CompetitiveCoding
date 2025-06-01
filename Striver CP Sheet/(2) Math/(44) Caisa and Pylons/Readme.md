# Caisa and Pylons
[Caisa and Pylons](https://codeforces.com/problemset/problem/463/B)

### Problem Logic
#### Two approaches to solve this problem :
First what we see in the code, in that we start with `currentHeight=0`, then we move in the array and add energy by the question rule, then if energy is lesser than 0 we make energy `0` and `dollars+=amount of energy needed to make energy` `0`. This is a good approach easy to think of and get's accepted.

Another approach to solve this is following, though it is unlikely to come up with it straight up :-
```
#include <bits/stdc++.h>
using namespace std;
 
int minPossibleDollars(vector<int>& pylonHeights) {
    return *max_element(pylonHeights.begin(), pylonHeights.end());
}
 
int main() {
    int n;
    cin >> n;
    vector<int> pylonHeights(n);
    for (int& h : pylonHeights) cin >> h;
    cout << minPossibleDollars(pylonHeights) << endl;
    return 0;
}
```
Caisa starts at pylon 0 (height 0) with 0 energy. Every time he jumps from one pylon to the next, his energy changes by `currentHeight - nextHeight`. So if he jumps **up** (to a taller pylon), he **loses** energy, and if he jumps **down**, he **gains** energy.

Now, let’s say the tallest pylon has height `H`. To safely reach that pylon from the ground (which is height 0), he would lose `H` energy **at some point** — whether in one big jump or in several smaller uphill steps.

Therefore, no matter what the path looks like, **the worst energy dip he could experience is `-H`**, which means he needs **at least `H` energy at the start** to guarantee he never drops below 0. That’s why the **maximum height** in the array is the minimum energy (or money) Caisa needs to pay — it's the worst-case climb he must be ready for.

### In short:
You only need to pay for the **maximum height** because that's the **minimum starting energy** required to survive the steepest part of the path without energy going negative.