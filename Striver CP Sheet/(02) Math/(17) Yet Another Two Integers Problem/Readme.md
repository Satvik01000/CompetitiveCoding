# Yet Another Two Integers Problem
[Yet Another Two Integers Problem](https://codeforces.com/problemset/problem/1409/A)

### Problem Logic
In this we can do this and it is correct and first thought

```cpp
#include<bits/stdc++.h>
using namespace std;
 
int minMoves(int a, int b){
    int moves=0;
    while(a!=b){
        if(a<b){
            if(a+10>b){
                a+=(b-a);
                moves++;
                return moves;
            }
            a+=10;
            moves++;
        }else{
            if(a-10<b){
                a-=(a-b);
                moves++;
                return moves;
            }
            a-=10;
            moves++;
        }
    }
    return moves;
}
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<minMoves(a, b)<<endl;
    }
    return 0;
}
```

But that will lead to a TLE, so what we will do is `moves= abs(a - b) / 10 + (abs(a - b) % 10 != 0);`, the first part in this formula is number of 10 steps that we can take in the moves, i.e. our logic remains same we greedly subtract or add the largest possible number which is 10 and then add the remaining, which is the second part, if remainder is remaining 1 more move will be required, for example 

a = 13, b = 42
abs(13 - 42) = 29
- → 29 / 10 = 2 (2 full 10-value moves = 20)
- → 29 % 10 = 9 (still 9 left)
- So we need one more move → total = 2 + 1 = 3