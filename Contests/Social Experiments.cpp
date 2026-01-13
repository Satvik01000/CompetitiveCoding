#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        if(n==2) cout<<2<<endl;
        else if(n==3) cout<<3<<endl;
        else if(n>=4) cout<<n%2<<endl;
    }
    return 0;
}
