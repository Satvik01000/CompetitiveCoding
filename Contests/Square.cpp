#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        if(a==b && b==c && c==d) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
