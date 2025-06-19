# Increasing by Modulo
[Increasing by Modulo](https://codeforces.com/contest/1169/problem/C)

### Problem Logic
- **Firt of all why is Binary Search applicable in this :**
We have a range between the number of operations and we need to find the minimum number of operations that is valid.

- **Now how to solve this problem :**
First of all what does this selecting `k` elements and incrementing them means here, it means that we can select any number of elements in the array and increment them, we are not limited to incrementing 2 or 3 elements. Basically we can forget `k` for this problem as we can increment or decrement any number of elements for this problem.

Now let us define what one operation means, first we select the `k` elements then we increment all of them at once, this is considered one operation, incrementing just one element among the `k` elements is not one operation.

So what we do is binary search on the range `low=0 and high=m`, i.e. we will check if we increment each element by a number between these and that number will also be the total number of operations. For example suppose `mid=3` now we will verify if we can make the array non-decreasing by incrementing some valid elements that fit our logic, if so then we return a true else false. Now one operation would be incrementing all those selected numbers, and we will verify if we can increment all those selected numbers and make the array non-decreasing, if any number needs more than `mid` number of increments that means more than `mid` number of operations are required due to it and hence we will return a false.

In lay man terms, we if `mid=3` we will increment `k` elements 3 times, one operation is increasing each element once, now if any of those `k` elements obstructs making the array sorted after being incremented `k` times we return a false.

Now why is the range capped at `m`, it is because increment goes like this `(nums[i]+1)%m`, hence any increment more than `m` is of no use.


Now how we will verify we will traverse the array and check if we can make the element equals to it's previous element in `mid` number of increments `int need = (b[i - 1] - b[i] + m) % m;`, then we verify wether this need is less than or equal to `mid`, if so we make the present element equal to the previous one, and if not then we check if the present element is greater than or lesser than the previous one, if it is greater than the previous one then we return false as `mid` number of increments cannot make this array non-decreasing. 