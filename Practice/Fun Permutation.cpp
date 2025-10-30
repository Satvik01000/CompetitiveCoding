#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(vector<int>& nums, const int& n){
    for(int& i : nums) cout<<n+1-i<<" ";
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
        helper(nums, n);
    }
    return 0;
}
