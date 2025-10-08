#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperations(vector<int>& nums, const int& n, const int& k){
    unordered_set<int> elems(nums.begin(), nums.end());
    int missingCount=0, kCount=0;
    for(int i=0; i<k; i++) if(elems.find(i)==elems.end()) missingCount++;
    for(auto& i : nums) if(i==k) kCount++;

    return max(kCount, missingCount);
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> nums(n);
        for(auto& i : nums) cin>>i;
        cout<<minOperations(nums, n, k)<<endl;
    }
    return 0;
}
