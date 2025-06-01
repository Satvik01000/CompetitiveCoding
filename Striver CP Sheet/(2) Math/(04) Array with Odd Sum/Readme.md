# Array with Odd Sum
[Array with Odd Sum](https://codeforces.com/problemset/problem/1296/A)

### Problem Logic
See 

```
odd + odd = even
even + even = even
abs(odd-even) = odd
odd+even = odd
```
So in the problem only way to obtain an odd sum is to have a odd number in the array if there is even a single odd number in the array totalSum will always be odd, and there will be no need of the replace program. But if all the elements are odd and the totalSum is even then no matter what replacing one does the sum will alway be even similarly if all the numbers are even then no matter what replacing one does sum will always be even.