# Donut Shops
[Donut Shops](https://codeforces.com/problemset/problem/1373/A)

### Problem Logic
In this we need not find the maximum possible donuts that we need to purchase from either shop such that it will be cheaper from the other shop, we need to find any x such that if it is purchased from first shop it will be cheaper than the second and vice versa, so don't go for simulation(i.e. loops) go for a greedy approach, the first shop offeres us to pay for a retail price in small quantity and other one offers us to purchase in bulk, now 

(1) To make first shop cheaper at any point, it must be cheaper even for smallest purchase, i.e. 1 donut:

`a < c`

because for 1 donut:

First shop cost = a

Second shop will force you to buy a whole box of b donuts = c

But you just want 1, so cost becomes c

So if a < c ➡ x1 = 1, else x1 = -1

(2) To make second shop cheaper at any point, you must buy exactly b donuts:

For b donuts:

First shop cost = a * b

Second shop = 1 box = c

So if c < a * b ➡ x2 = b, else x2 = -1

