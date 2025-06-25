### Target Practice
[Target Practice](https://codeforces.com/problemset/problem/1873/C)

### Problem Logic
Straightforward problem we will make a `10⤫10` gird, in this grid see the picture all numbers from  
<img src="https://github.com/user-attachments/assets/8358a032-b3c9-40e5-9151-90975fa8ef7e" width="500"/>

1 to 10 give a score -> 1  
2 to 9 give a score -> 2  
3 to 8 give a score -> 3  
4 to 7 give a score -> 4  
5 to 6 give a score -> 5  

Now what we will do is we will make a `vector<pair<int, int>> arrowHit`, this will include all the indices where the arrow was hit, now what we will do is make a function which gives us the point we scored, what we will do is calculate greedily from the highest, if the `x-coordinate` falls between `5 and 6` and the `y-coordinate` as well falls between `5 and 6`, then we return a point as `5` and so on.

```cpp
int point(const int i, const int j){
    if((i>=5 && i<=6) && (j>=5 && j<=6)) return 5;
    if((i>=4 && i<=7) && (j>=4 && j<=7)) return 4;
    if((i>=3 && i<=8) && (j>=3 && j<=8)) return 3;
    if((i>=2 && i<=9) && (j>=2 && j<=9)) return 2;
    if((i>=1 && i<=10) && (j>=1 && j<=10)) return 1;
    return 0;
}
