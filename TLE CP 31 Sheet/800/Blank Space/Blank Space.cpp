#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int maxBlankSpaceSize(vector<int>& nums, int n){
    int ans=0;
    for(int i=0; i<n; i++){
        int zeroCount=0;
        while(i<n && nums[i]==0){
            zeroCount++;
            i++;
        }
        ans = max(ans, zeroCount);
    }
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(auto& i : nums) cin>>i;
        cout<<maxBlankSpaceSize(nums, n)<<endl;
    }
    return 0;
}
