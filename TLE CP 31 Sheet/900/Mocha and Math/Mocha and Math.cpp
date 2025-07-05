#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        cin>>nums[0];
        int ans=nums[0];
        for(int i=1; i<n; i++){
            cin>>nums[i];
            ans&=nums[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
