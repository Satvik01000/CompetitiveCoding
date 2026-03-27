#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define MOD 1000000007

ll subarraysWithSumX(vector<int>& nums, int x, int n) {
    ll sum = 0;
    int low = 0;
    ll ans = 0;

    for(int high = 0; high<n; high++) {
        sum+=nums[high];
        while(sum > x) {
            sum-=nums[low];
            low++;
        }
        if(sum==x) ans++;
    }
    return ans;
}

int main() {
    fast;
    int n, x;
    cin>>n>>x;

    vector<int> nums(n);
    for(auto& i : nums) cin>>i;
    cout<<subarraysWithSumX(nums, x, n)<<endl;
    return 0;
}