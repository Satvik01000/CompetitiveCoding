#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll notPossibleMinSum(vector<int>& nums, const int& n){
    sort(nums.begin(), nums.end());
    if(nums[0]!=1) return 1;
    ll minSum = 0, maxSum = 1;
    for(int i=1; i<n; i++){
        ll tempMinSum = minSum+nums[i];
        ll tempMaxSum = maxSum+nums[i];
        if(tempMinSum - maxSum >1) break;
        maxSum=tempMaxSum;
    }
     return maxSum+1;
}

int main() {
    fast;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto& i : nums) cin>>i;
    cout<<notPossibleMinSum(nums, n)<<endl;
    return 0;
}
