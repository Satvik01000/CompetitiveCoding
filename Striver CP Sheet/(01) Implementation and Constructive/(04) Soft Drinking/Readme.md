# Soft Drinking
[Soft Drinking](https://codeforces.com/problemset/problem/151/A)

### Problem logic
This is a very simple and straight-forward question, we will need to consider 
how many toasts can we make just with the drinks
how many just with the lemon slices and
how many just with the salt
**The one which is the minimum amongst the three**
is the minimum number of drinks that one person can make if given all the resources.
But we have n friends and each wants to make equal number of toasts so

`ans = min({totalToastsWithDrink, totalToastWithSalt, totalToastWithLimeSlices})/n;`
