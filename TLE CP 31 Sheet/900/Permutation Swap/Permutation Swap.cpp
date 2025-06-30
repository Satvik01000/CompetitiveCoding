#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int maxPossibleK(vector<int>& nums, int n){
    int ans=0;
    for(int i=1; i<=n; i++)
        ans=__gcd(ans, abs(nums[i]-i));
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums(n+1);
        for(int i=1; i<=n; i++) cin>>nums[i];
        cout<<maxPossibleK(nums, n)<<endl;
    }
    return 0;
}
