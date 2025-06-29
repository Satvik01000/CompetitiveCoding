#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll maxBombExplodeTime(vector<ll>& increment, ll a, ll b, ll n){
    sort(increment.begin(), increment.end());
    ll timeTillExplosion=0;
    for(ll i=n-1; i>=0; i--){
        timeTillExplosion+=(b-1);
        b=min(1+increment[i], a);
    }
    return timeTillExplosion+b;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll a, b, n;
        cin>>a>>b>>n;
        vector<ll> increment(n);
        for(auto& i : increment) cin>>i;
        cout<<maxBombExplodeTime(increment, a, b, n)<<endl;
    }
    return 0;
}
