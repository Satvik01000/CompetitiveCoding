### Forked!
[Forked!](https://codeforces.com/problemset/problem/1904/A)

### Problem Logic
What we need to do in this problem is we need to find all the places where the Knight can hit the king from and all the places the knight can hit the queen from, after doing that we will find the commong hits and that would be our answer.
So how we will do that is, say the king is at a origin, the knight can hit the king from 4 different directions, for example from `a` in `x axis` and `b` in `y axis`, `a` in `-x axis`, `b` in `y axis` and so on, same for the queen.
What we will do is use the `dx and dy` array technique for direction traversing that we learnt in graphs, and use a set to make sure that no repeated indices are inserted again and again. After that we will insert all the positions of hits in the queenHits and kingHits set and then traverse the sets and find out the common occurences and return the count of them as they answer.