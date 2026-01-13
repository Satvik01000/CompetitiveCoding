#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll sandFallAfterLeave(ll s, ll k, ll m){
    if(s <= k) {
        m %= k;
        if(m < s) return s - m;
        return 0;
    }
    
    m %= (2 * k);
    if(m < k) return s - m;
    return k - (m - k);
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll s, k, m;
        cin>>s>>k>>m;
        cout<<sandFallAfterLeave(s, k, m)<<endl;
    }
    return 0;
}