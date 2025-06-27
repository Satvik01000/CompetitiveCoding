#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperations(int n, vector<int>& nums){
    int ans=INT_MAX;
    for(auto& i : nums) ans=min(ans, abs(i));
    return ans;
}

int main() {
    fast;
    int n;
    cin>>n;
    vector<int> nums(n);
    for(auto& i : nums) cin>>i;
    cout<<minOperations(n, nums)<<endl;
    return 0;
}
