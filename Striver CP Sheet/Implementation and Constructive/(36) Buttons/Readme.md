# Buttons
[Buttons](https://codeforces.com/problemset/problem/268/B)

### Problem Logic
This is a difficult problem and is based on math pattern recognition, but before all that first thing is to understand the inputs and outputs, for example let's take input is equal to 3, from that as said in the problem we are getting an output of 7, now how are we getting 7 is the part to understand (W represents wrong and R represents right), we have 3 positions:-

`_ _ _`

<img width="69" alt="image" src="https://github.com/user-attachments/assets/54113d33-33b4-4392-bf2a-93ddc4843d47" />

So that is total 7 key presses, in the first and second we pressed wrong `totalPresses=2`, then we pressed the right key then once again wrong key so `totalPresses=4`, then we pressed all the right keys, so `totalPresses=7`, from this we can observe one thing which is the base of this problem the result will be `1*(n-1)+1 + 2*(n-2)+1 + ------ + n*(n-n)+1`, i.e. if input is 3 then uptil 3-1=2 times we will get only one key press because in the worst case for finding the right key at first position requires `n-1` presses, then remaining keys are `n-1` and in the worst case to find the right key at this position will require `n-2` operations and each operation will contain `2` key presses hence `2*(n-2)+1` and so on till `n*(n-n)+1`, this gives out the formula to be 

<img width="182" alt="image" src="https://github.com/user-attachments/assets/008739ab-94b4-46e7-95e8-6cc30d98c628" />


As can be seen in the commented part of the code, we can use a for loop to do this and solve the problem. This will result in O(N) TC, but if we use Math and solve this `Σ`, then we can get the formula `(n*(n*n + 5))/6`, using which the TC will be O(1). 

For how to open that split 

<img width="422" alt="image" src="https://github.com/user-attachments/assets/56843c30-4a65-43ee-a63e-3c40dcf1e794" />

<img width="100" alt="image" src="https://github.com/user-attachments/assets/49e7536d-ecd1-403c-b2c6-8255f525a938" />

<img width="254" alt="image" src="https://github.com/user-attachments/assets/1aaf262a-ebee-4240-9e4a-e05ddaa96fe3" />

<img width="436" alt="image" src="https://github.com/user-attachments/assets/e75b6be7-dc50-4f56-8bb6-f3c77514f9d4" />

Now combine both parts and solve.
