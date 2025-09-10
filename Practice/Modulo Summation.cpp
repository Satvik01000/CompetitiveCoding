#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n;
    cin>>n;
    vector<int> nums(n);
    ll ans = 0;
    for(auto& i : nums){
        cin>>i;
        ans+=(i-1);
    }
    cout<<ans<<endl;
    return 0;
}