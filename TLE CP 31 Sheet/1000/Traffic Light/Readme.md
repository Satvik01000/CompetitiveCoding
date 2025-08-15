### Traffic Light
[Traffic Light](https://codeforces.com/problemset/problem/1744/C)

### Problem Logic
To tackle this problem, we need to determine the maximum difference between a given initial colour `c` and the nearest green light to that given colour `c` in the string. Taking the maximum difference between all the positions of `c` and the position of their nearest green lights will help us ensure that if we start at colour `c`, we can cross the road in at most that amount of time. 

Our approach involves pre-computing the positions of all green lights in the string. However, we’ll add a twist: we’ll extend the string by appending it to itself. For instance, if the string is `rrrgyyygy`, we’ll transform it into `rrrgyyygy + rrrgyyygy`. This allows us to find the nearest green light for the last occurrence of colour `c`. To achieve this, we’ll create an array to store the indices of the green lights.

Next, we’ll traverse the given string `s` using two pointers: one that points to our greenLightIndices array and another that points to the string `s`. We’ll implement two conditions: if `s[i] == c`, we update `ans = max(ans, greenLightIndices[j] - i)`; now the second condition is if `greenLightIndices[j] ≤ i`, we increment `j`. Finally, we return the value of `ans`.