#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    ll n, q;
    cin>>n>>q;
    vector<ll> nums(n);
    vector<ll> prefix(n);
    cin>>nums[0];
    prefix[0]=nums[0];
    for(ll i=1; i<n; i++){
        cin>>nums[i];
        prefix[i]=prefix[i-1]+nums[i];
    }
    while(q--){
        ll l, r;
        cin>>l>>r;
        l--; r--;
        cout<<(prefix[r]-(l>0 ? prefix[l-1] : 0))<<endl;
    }
    return 0;
}
