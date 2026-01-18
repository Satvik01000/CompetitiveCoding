#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int arrayValue(vector<int>& nums, int n){
    int maxElem = INT_MIN;
    for(auto& i : nums) maxElem = max(maxElem, i);

    return maxElem*n;
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
        cout<<arrayValue(nums, n)<<endl;
    }
    return 0;
}
