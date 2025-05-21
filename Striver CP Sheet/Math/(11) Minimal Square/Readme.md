# Minimal Square
[Minimal Square](https://codeforces.com/problemset/problem/1360/A)

### Problem Logic
We will consider both possible placements of the rectangles (without rotation and with rotation):

1. **Both rectangles placed side-by-side horizontally** (i.e., width doubles):  
   The side of the square in this case is `max(2 * a, b)`

2. **Both rectangles placed side-by-side vertically** (i.e., height doubles):  
   The side of the square here is `max(a, 2 * b)`

We then take the **minimum** of the two sides above — that will be the **smallest possible side of the square**, and the **area** will be that side squared.
