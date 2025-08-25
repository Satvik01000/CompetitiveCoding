#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n, q;
    cin>>n>>q;
    vector<int> a(n), b(n);
    for(auto& i : a) cin>>i;
    for(auto& i : b) cin>>i;

    ll sum=0;
    for(int i=0; i<n; i++) sum+=min(a[i], b[i]);
    
    while(q--){
        char c;
        int x, v;
        ll ans=sum;
        cin>>c>>x>>v;
        sum -= min(a[x-1], b[x-1]);
        if(c=='A') a[x-1] = v;
        else b[x-1] = v;
        sum += min(a[x-1], b[x-1]);
        cout << sum << "\n";
    }
    return 0;
}
