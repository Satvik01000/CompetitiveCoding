#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll maxPossibleSumOfMedians(vector<int>& nums, int n, int k){
    ll ans = 0;
    ll size = n*k;
    int interval = (n>>1);
    int count = 1;
    for(int i = size - interval - 1; i>=0 && count<=k; i-=(interval+1), count++) ans+=nums[i];
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> nums(n*k);
        for(auto& i : nums) cin>>i;
        cout<<maxPossibleSumOfMedians(nums, n, k)<<endl;
    }
    return 0;
}
