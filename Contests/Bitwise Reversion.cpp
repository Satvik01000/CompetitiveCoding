#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string existOrNot(int x, int y, int z){
    for (int k = 0; k < 31; k++) {
        int xb = (x >> k) & 1;
        int yb = (y >> k) & 1;
        int zb = (z >> k) & 1;
        
        if(xb == 1 && yb == 1 && zb == 0) return "NO";
        if(xb == 1 && yb == 0 && zb == 1) return "NO";
        if(xb == 0 && yb == 1 && zb == 1) return "NO";

    }
    return "YES";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int x, y, z;
        cin>>x>>y>>z;
        cout<<existOrNot(x, y, z)<<endl;
    }
    return 0;
}
