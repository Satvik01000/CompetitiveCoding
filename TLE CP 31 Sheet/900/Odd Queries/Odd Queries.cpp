#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(vector<int>& nums, vector<ll>& prefixSum, ll sum, int n, int l, int r, int k){
    ll rangeSum = prefixSum[r] - (l>0 ? prefixSum[l-1] : 0);
    ll remainingSum = sum - rangeSum;
    int size = r - l + 1;
    if ((k & 1) && (size & 1) && !(remainingSum & 1)) return "YES";
    if ((!(k & 1) || !(size & 1)) && ((remainingSum & 1))) return "YES";
    return "NO";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin>>n>>q;
        vector<int> nums(n);
        vector<ll> prefixSum(n);
        cin>>nums[0];
        prefixSum[0]=nums[0];
        ll sum=nums[0];
        for(int i=1; i<n; i++){
            cin>>nums[i];
            sum+=nums[i];
            prefixSum[i]=nums[i]+prefixSum[i-1];
        }
        for(int i=1; i<=q; i++){
            int l, r, k;
            cin>>l>>r>>k;
            cout<<possibleOrNot(nums, prefixSum, sum, n, l-1, r-1, k)<<endl;
        }
    }
    return 0;
}
