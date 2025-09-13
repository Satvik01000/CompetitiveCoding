#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int x, n;
        cin>>x>>n;
        if(n&1) cout<<x<<endl;
        else cout<<0<<endl;
    }
    return 0;
}
