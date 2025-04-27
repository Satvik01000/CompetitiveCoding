# The New Year: Meeting Friends 
[The New Year: Meeting Friends](https://codeforces.com/problemset/problem/723/A)

### Problem logic
The main thing in this problem is to recognize that the three of them will be meeting at
home of one of them, because this way one of the firends will not have to move at all
Now make an array of size 3 for an easy traversal on the three coordinates and take the input 
then in each iteration
`dist = abs(arr[i]-arr[j])`
making sure that `i!=j`
then after the first loop ends `minDist = min(minDist, dist)`

The TC of this will be O(9) and also the SC of this will be O(3)