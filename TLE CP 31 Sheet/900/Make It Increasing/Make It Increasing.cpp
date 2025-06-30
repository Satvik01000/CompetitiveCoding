#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperations(vector<int>& nums, int n){
    int operations=0;
    for(int i=n-1; i>0; i--){
        if(nums[i]==0) return -1;
        while(nums[i]<=nums[i-1]){
            nums[i-1]/=2;
            operations++;
        }
    }
    return operations;
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
