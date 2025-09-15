#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll maxTeleportersPossible(vector<int>& nums, int& c, const int& n){
    sort(nums.begin(), nums.end());
    ll ans = 0;
    for(int i=0; i<n && c>0; i++){
        if(nums[i]>c) break;
        c-=nums[i];
        ans++;
    }
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, c;
        cin>>n>>c;
        vector<int> nums(n);
        for(int i=0; i<n; i++){
            cin>>nums[i];
            nums[i]+=(i+1);
        }
        cout<<maxTeleportersPossible(nums, c, n)<<endl;
    }
    return 0;
}
