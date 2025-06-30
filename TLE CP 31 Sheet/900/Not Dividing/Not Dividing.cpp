#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void numberOfOperations(vector<int>& nums, int n){
    for(int i=1; i<n; i++)
        if(nums[i]%nums[i-1]==0) nums[i]++;
    for(int& i : nums) cout<<i<<" ";
    cout<<endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(auto& i : nums){ 
            cin>>i;
            if(i==1) i++;
        }
        numberOfOperations(nums, n);
    }
    return 0;
}
