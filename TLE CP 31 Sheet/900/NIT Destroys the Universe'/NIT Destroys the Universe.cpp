#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperationsRequired(vector<int>& nums, int n){
    int count = 0;
    for(int i = 0; i < n; i++){
        if(nums[i] != 0) {
           count++;
           while(i < n && nums[i] != 0) i++;
        }
    }
    if(count > 1) count = 2;
    return count;
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
        cout<<minOperationsRequired(nums, n)<<endl;
    }
    return 0;
}
