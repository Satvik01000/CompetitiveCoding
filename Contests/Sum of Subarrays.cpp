#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n, q;
    cin>>n>>q;
    vector<int> nums(n);
    cin>>nums[0];
    vector<ll> prefix(n, 0);
    prefix[0]=nums[0];
    for(int i = 1; i<n; i++){
        cin>>nums[i];
        prefix[i]=prefix[i-1]+nums[i];
    }

    ll ans = 0;
    while(q--){
        int l, r;
    }

    return 0;
}
