#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperations(vector<int>& nums, int n){
    int minDifference=INT_MAX;
    for(int i=0; i<n-1; i++)
        minDifference=min(minDifference, nums[i+1]-nums[i]);
    if(minDifference<0) return 0;
    return minDifference%2==0 ? (minDifference/2)+1 : (minDifference+1)/2;
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
        cout<<minOperations(nums, n)<<endl;
    }
    return 0;
}
