# Pasha and Stick
[Pasha and Stick](https://codeforces.com/problemset/problem/610/A)

### Problem Logic
The given `n` always has to be even because in a rectangle opposite sides are always of the same length so `2*a + 2*b` will always be even if given `n` is not even then return `0` as rectangle cannot be formed, other case is `n<6`, in that case also it is not possible to form a rectangle which can be figured out just by observation.

Now for the valid cases, we will return `n/4` if `n/2` is odd otherwise `n/4 - 1` if `n/2` is even, this is because `2*a + 2*b` will always be equal to `n`, so `a + b = n/2`, now according to the question 

```
Two ways to cut the stick are considered distinct if there exists some integer x,
such that the number of parts of length x in the first way differ from the number
of parts of length x in the second way.
```

in simpler words `1,1,2,2` will be equal to `2,2,1,1` so that is a repetation.

So to sum up we need to find 2 numbers `a` and `b` which sum to `n/2`.

![image](https://github.com/user-attachments/assets/e41d95db-0081-4bde-9361-d69915e12366)


As stated in the image we will go till one way before `n/2` as repetation starts from there, in case of a odd number i.e. `n/2` is odd then we will return `n/4` and in case of even `(n/4) - 1` this is because in case of even number `(n/4), (n/4)` will be equal but in case of odd that will not be the case, to better understand take an example and dry run.
