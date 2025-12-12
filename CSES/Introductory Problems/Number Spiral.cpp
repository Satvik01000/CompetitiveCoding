#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll num(ll& x, ll& y){
    if(x<=y){
        if(y&1) return (y*y)-(x-1);
        else return ((y-1)*(y-1)) + x;
    }else{
        if(x&1) return ((x-1)*(x-1)) + y;
        else return x*x - (y - 1);
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll x, y;
        cin>>x>>y;
        cout<<num(x, y)<<endl;
    }
    return 0;
}
