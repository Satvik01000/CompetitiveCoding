### Chemistry
[Chemistry](https://codeforces.com/problemset/problem/1883/B)

### Problem Logic
Only possible way to get a palindrome would be using even frequency characters, or having even frequency characters and one character having a frequency `1`.
We will count the odd numbers and if the count of odd numbers is `≤k+1` we return a `YES` otherwise a `NO`. `k+1` and not just `k` because suppose we got the count as `5` and the `k` limit was 4, now still we can make it a palindrome by taking the one odd frequency element and placing it in between.