#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int kValue(string& x, string& y){
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    int posX = 0, posY = 0;
    for(int i=0; i<y.size(); i++) if(y[i]=='1'){posY = i; break;}
    for(int i=posY; i<x.size(); i++) if(x[i]=='1') {posX = i; break;}

    return posX - posY;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        string x, y;
        cin>>x>>y;
        cout<<kValue(x, y)<<endl;
    }
    return 0;
}