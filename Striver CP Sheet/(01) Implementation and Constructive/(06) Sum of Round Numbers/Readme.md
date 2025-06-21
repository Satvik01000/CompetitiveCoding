# Sum of Round Numbers
[Sum of Round Numbers](https://codeforces.com/problemset/problem/723/A)

### Problem logic
The main thing in this problem is to understand that we should take input as a
string rather than an integer even though the size constraints allow taking an
integer and that will work but that will cause unecessary calculation of counting
the length of each number then another complexity in trying to traverse the int, so
better take the input as a string, the second thing in this problem is because we have to 
print the number of summands first then the summands themselves so we will store the result in
a temp vector then after the loop is over print the size of that vector then the contents of that
vector.