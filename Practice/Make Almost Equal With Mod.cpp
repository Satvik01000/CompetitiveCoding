#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll validK(vector<ll>& nums, int n){
    for(int k=1; k<=61; k++){
        set<ll> distinct;
        for(auto& i : nums)
            distinct.insert(i & ((1LL<<k)-1)); // i % (2^k)
        if(distinct.size() == 2) return (1LL<<k);
    }
    return -1;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> nums(n);
        for(auto& k : nums) cin >> k;
        cout << validK(nums, n) << "\n";
    }
    return 0;
}
