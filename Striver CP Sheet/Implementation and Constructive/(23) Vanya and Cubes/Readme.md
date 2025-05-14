# Vanya and Cubes
[Vanya and Cubes](https://codeforces.com/problemset/problem/492/A)

### Problem Logic
In this start a loop `while(n>0)` then at every level the totalNumber of needed blocks can be calculated via the formula `((n)*(n+1))/2` or do `totalNeeded+=level` then go on substracting at every level until the loop is true then in the end 
`return n<0 ? level-1 : level;`