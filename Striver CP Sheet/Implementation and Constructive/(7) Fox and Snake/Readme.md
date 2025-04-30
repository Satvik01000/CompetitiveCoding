# Fox and Snake
[Fox and Snake](https://codeforces.com/problemset/problem/510/A)

### Problem logic
The main crux in this problem is to identify what the problem is asking to do, 
in simple words the problem is just asking to print a pattern which resembles a snake
in even rows just print one # representing one part of the snake body and in odd rows print
m number of #, take a `bool flag` when it is true print the # in the even row at the last column
and when it is false print it at the first column, also the problem says to print `.` in the empty area so do that as well.