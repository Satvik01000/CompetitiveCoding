#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minCost(ll a, ll b, ll k){
    ll g = __gcd(a, b);
    if(a/g<=k && b/g<=k) return 1;
    return 2;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll a, b, k;
        cin>>a>>b>>k;
        cout<<minCost(a, b, k)<<endl;

    }
    return 0;
}
