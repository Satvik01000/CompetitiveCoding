### Sequence Game
[Sequence Game](https://codeforces.com/problemset/problem/1862/B)

### Problem Logic
The problem looks tough on the first read but is really simple. What we will do is first of all find all the misplaced indices in the given input, according to the rule that `a[i]≥a[i-1]`, if there is no such index we can output the given input as the possible sequence, but if there are misplaced indices, then what we will do is make an `ans` array and then add all the numbers from nums to it, but when we come accross a index which was misplaced what we will do is insert the `nums[i]` twice in the `ans` array, this is so that we can pick our misplaced number.