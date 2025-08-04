### Monsters
[Monsters](https://codeforces.com/problemset/problem/1849/B)

### Problem Logic
So what we are basically doing in this problem is that we have an array of health of monsters, now what we will do is that we will subtract `k` from the health of the monster having the current maximum health, and we will go on with this process until we reach a point where health of all the monsters is now so that if we subtract `k` from any monster's health it will die. For example
```
n=4, k=3
health array = {2, 8, 3, 5}

Step-1 : 2 5 3 5
Step-2 : 2 2 3 5
Step-3 : 2 2 3 2
```
Now from this point onwards hitting any monster will kill it. 
So to reach this point in least time what we will do is use the `modulo` operation, this we will modulo each element in the array with `k`. After that we will use a priority_queue with `pair<int, int>` with first parameter being monster health and second being index, we will use a custom comparator because we need the pq to act as a max heap if the first param is not equal but act as min heap when the first parameter is equal.