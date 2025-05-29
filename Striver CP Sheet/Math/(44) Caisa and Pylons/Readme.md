# Caisa and Pylons
[Caisa and Pylons](https://codeforces.com/problemset/problem/463/B)

### Problem Logic
Caisa starts at pylon 0 (height 0) with 0 energy. Every time he jumps from one pylon to the next, his energy changes by `currentHeight - nextHeight`. So if he jumps **up** (to a taller pylon), he **loses** energy, and if he jumps **down**, he **gains** energy.

Now, let’s say the tallest pylon has height `H`. To safely reach that pylon from the ground (which is height 0), he would lose `H` energy **at some point** — whether in one big jump or in several smaller uphill steps.

Therefore, no matter what the path looks like, **the worst energy dip he could experience is `-H`**, which means he needs **at least `H` energy at the start** to guarantee he never drops below 0. That’s why the **maximum height** in the array is the minimum energy (or money) Caisa needs to pay — it's the worst-case climb he must be ready for.

### In short:
You only need to pay for the **maximum height** because that's the **minimum starting energy** required to survive the steepest part of the path without energy going negative.