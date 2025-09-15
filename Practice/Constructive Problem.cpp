#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int mex(const vector<int>& nums) {
    unordered_set<int> s(nums.begin(), nums.end());
    for (int i = 0; ; ++i)
        if (s.find(i) == s.end()) return i;
}

string possibleOrNot(vector<int>& nums, const int& n){
    int m = mex(nums);
    int target = m + 1;

    int low, high;
    for(low=0; low<n; low++) if(nums[low] == target) break;
    for(high=n-1; high>=0; high--) if(nums[high] == target) break;

    if(low > high) { // Case where m+1 is not in the array
        if (m < n) return "Yes";
        return "No";
    }else { // Case where m+1 is in the array
        for(int i=low; i<=high; i++) nums[i] = m;
        if(mex(nums) == target) return "Yes";
        return "No";
    }
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
        cout<<possibleOrNot(nums, n)<<endl;
    }
    return 0;
}