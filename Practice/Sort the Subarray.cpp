#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(vector<int>& nums1, vector<int>& nums2, const int& n){
    int low=0, high=n-1;

    while(low<n && nums1[low]==nums2[low]) low++;
    while(high>=0 && nums1[high]==nums2[high]) high--;

    while(low>0 && nums2[low] >= nums2[low-1]) low--;

    while(high<n-1 && nums2[high] <= nums2[high+1]) high++;

    cout<<low+1<<" "<<high+1<<"\n";
}


int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums1(n), nums2(n);
        for(auto& i : nums1) cin>>i;
        for(auto& i : nums2) cin>>i;
        helper(nums1, nums2, n);
    }
    return 0;
}