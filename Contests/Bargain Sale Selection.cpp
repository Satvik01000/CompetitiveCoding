#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n, k;
    cin>>n>>k;
    vector<vector<int>> nums(n, vector<int>(3, 0));

    for(auto& i : nums) {
        int a, b;
        cin>>a>>b;
        i = {a-b, a, b};
    }

    sort(nums.begin(), nums.end(), [](const vector<int>& a, const vector<int>& b) {
        if(a[0]==b[0]) return a[1] > b[1];
        return a[0] > b[0];
    });

    ll ans = 0;
    for(int i = 0; i<n; i++){
        if(k>0) {
            ans+=nums[i][2];
            k--;
        }
        else ans+=nums[i][1];
    }
    cout<<ans<<endl;
    return 0;
}
