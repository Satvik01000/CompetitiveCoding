# Buttons
[Buttons](https://codeforces.com/problemset/problem/268/B)

### Problem Logic
This is a difficult problem and is based on math pattern recognition, but before all that first thing is to understand the inputs and outputs, for example let's take input is equal to 3, from that as said in the problem we are getting an output of 7, now how are we getting 7 is the part to understand (W represents wrong and R represents right), we have 3 positions :-

`_ _ _`
W
W
R W
R R R

So that is total 7 key presses, in the first and second we pressed wrong `totalPresses=2`, then we pressed the right key then once again wrong key so `totalPresses=4`, then we pressed all the right keys, so `totalPresses=7`, from this we can observe one thing which is the base of this problem the result will be `1*(n-1)+1 + 2*(n-2)+1 + ------ + n*(n-n)+1`, i.e. if input is 3 then uptil 3-1=2 times we will get only one key press because in the worst case for finding the right key at first position requires `n-1` presses, then remaining keys are `n-1` and in the worst case to find the right key at this position will require `n-2` operations and each operation will contain `2` key presses hence `2*(n-2)+1` and so on till `n*(n-n)+1`, this gives out the formula to be 

    Σi*(n-i)+1, the limits being i=1 to i=n

We can use a for loop to do this and solve the problem as can be seen in the commented part of the code. This will result in O(N) TC, but if we use Math and solve this `Σ`, then we can get the formula `(n*(n*n + 5))/6`, using which the TC will be O(1). For how to open that split the `Σ` of `i*(n-i)` and 1, then `Σ1` will be `n`, and then multiply `i` in the bracket and the result will be `(ni - i^2)`, So when doing `Σ` now `Σni = nΣi` now use the formula for `Σi` and `Σi^2` when i is 1 to n and solve we will get `(n*(n*n + 5))/6`.