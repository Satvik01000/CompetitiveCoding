# Boring Apartments
[Boring Apartments](https://codeforces.com/problemset/problem/1433/A)

### Problem Logic
In this problem we need to think like this, suppose the number we are given is `22`, then all the numbers from `1 to 22` will come in that range, which will be `1, 11, 111, 1111, 2, 22`, so  the number of digits pressed is equal to `1 + 2 + 3 + 4 + 1 + 2`, i.e. the number of digits in each apartment number. 

Now we should see a pattern, if we are given 22 all the numbers before the range of `2` starts will be included, i.e. `1, 11, 111, 1111`, so the character count will be `1+2+3+4=10`, if it was `33` similarly entire range of `2` will also be included, so the total answer before `3's` range starts will be `10+10=20`, so this is what we have to do first of all up until we reach the given number's first digit. 

Then suppose we are given `33`, so it has two digits so we will be adding `1+2` to the answer, or suppose it was `333` then we will be adding `1+2+3` to the answer, so we can see a pattern, what we need to add to the answer will be sum of first natural numbers until the size, so we do `ans+=((n)*(n+1))/2;`.