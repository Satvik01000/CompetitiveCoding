#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minimumNumberOfChanges(vector<int>& nums, const int& n, const int& x){
    int low=nums[0], high=nums[0];
    int ans=0;
    for(int i=1; i<n; i++){
        high=max(nums[i], high);
        low=min(nums[i], low);
        if(low>high){
            ans++;
            low=high=nums[i];
        }
    }
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, x;       
        cin>>n>>x;
        vector<int> nums(n);
        for(auto& i : nums) cin>>i;
        cout<<minimumNumberOfChanges(nums, n, x)<<endl;
    }
    return 0;
}
