# Presents
[Presents](https://codeforces.com/problemset/problem/136/A)

### Problem Logic

#### (1) Atleast think this
The main crux in this problem is the weird language of the question.
Let's understand the question in layman terms, the array that is to be taken as input
represents ith friend gave gift to arr[i]th friend for example for the array
`2 3 4 1`, the 1st friend gave gift to 2nd friend, yes we count from 0 but count the friend
number as 1, i.e. i=0 to be counted as friend number = 1 as friends are numbered from 1 to n. So we use a hashmap to store the elements of the given array corresponding to who gave the gif to them, i.e. `map[arr[i]]=i`. Then we traverse from 1 to arr.size() and print map[i]+1, +1 for the same reasson of 0 and 1 based indexing of arrays and friends.

#### (2) Optimal
In this we won't use any hashmap, since the numbers are from 1 to n make a resulr arr of size n, then start a loop from 1 to n and and take input from the user, now reciever[input - 1]=i, then print the reciever array and that is the answer.