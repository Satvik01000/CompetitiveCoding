#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void possibleOrNot(vector<int>& nums, int n){
    if(nums[0]==nums[n-1]) {
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl<<nums[n-1]<<" ";
    for(int i=0; i<n-1; i++) cout<<nums[i]<<" ";
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
        for(auto& i : nums) cin>>i;
        possibleOrNot(nums, n);
    }
    return 0;
}
