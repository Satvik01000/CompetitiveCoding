# Road to Zero
[Road To Zero](https://codeforces.com/problemset/problem/1342/A)

### Problem Logic
Which operation we will perform first depends on which one is cheaper, suppose we give `a` dollars and reduce the `2` numbers individually, is that cheaper or reducing them together is cheaper for that we will use `if (b < 2 * a)`, if so then we will `return minXY * b + diffXY * a;`. Dry run it on any example for better understanding.