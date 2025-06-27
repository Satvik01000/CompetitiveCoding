### Buttons
[Buttons](https://codeforces.com/problemset/problem/1858/A)

### Problem Logic
The optimal strategy for both players is to finish the common buttons as quickly as possible, because doing so leaves the other player vulnerable. If I have more buttons afterward, I will win no matter what.

So, what we will do is first finish the common buttons `c`. Then, if `c` is even, since Anna played the first move, it will be her turn again; otherwise, it will be Katie's turn. Now, if `a == b`, then whoever goes first will lose the game. Otherwise, we can dry-run and test any case, even for two consecutive numbers—regardless of whose turn it is, the player with more buttons wins the game.