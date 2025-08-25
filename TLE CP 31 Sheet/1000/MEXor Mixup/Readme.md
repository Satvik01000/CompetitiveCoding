### Mexor Mixup
[Mexor Mixup](https://codeforces.com/problemset/problem/1567/B)

### Problem Logic
What we do in this problem is first of all the ans will have a length of `a` because for the `MEX` to be `a` it must contain numbers from `[0, 1,----, a-1]`. Now the xor value of all the numbers from `0 to a-1` till now is say `x`. Now we can have three cases :
(1) x==b, in this case just return a

(2) x!=b && xor(x, b)!=a, if so then at the end of the array we will add xor(x, b) this will not be a problem because xor(x, b) is not equal to `a` so `MEX` will still be `a` and for the getting xor of whole array as `b`, till now we had `x` as the xor, we added xor(x, b) so that makes the whole array xor as xor(x, x, b) which is equal to `b`. So return a+1. 

(3) x!=b && xor(x, b)==a, now we cannot add xor(x, b) at the end of the array so what we will do is insert two elements `(x^b^a+1)` and `(a+1)`, now this will result in `b` as x^x^b^(a+1)^(a+1) = b. 