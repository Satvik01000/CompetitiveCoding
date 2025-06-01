# Competitive Programmer
[Competitive Programmer](https://codeforces.com/problemset/problem/1266/A)

### Problem Logic
Pretty simple problem, we just need to make sure the number is divisible by 60 or not if it is then print `red` else print `cyan`. Divisibility test for 60 is divisible by 3, 4 and 5. For 4 last two digits should be divisible by 4 but we can take an easy route here as we need the number to be divisible by both 4 and 5, so divisibility test for 5 is last digit should be 5 or 0, but to be divisible by 4 and 5 both last digit cannot be 5 and the second last should be any even number even another zero, now see the code.