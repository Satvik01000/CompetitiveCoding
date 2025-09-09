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
        int zeroCount=0, ans=0;
        for(auto& i : nums){
            cin>>i;
            if(i==0) zeroCount++;
            ans+=i;
        }
        ans+=zeroCount;
        cout<<ans<<endl;
    }
    return 0;
}
