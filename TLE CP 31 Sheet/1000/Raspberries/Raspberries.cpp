#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> nums(n);
        int product=1;
        int ans = INT_MAX;
        int evenCount=0;
        for(auto& i : nums) {
            cin>>i;
            if(!(i&1)) evenCount++;
            int rem = i%k;
            ans = rem == 0 ? 0 : min(ans, k-rem);
        }
        if(k==2){
            if(evenCount>=1) cout<<0<<endl;
            else cout<<1<<endl;
        }else if(k==4){
            if(evenCount>=2) cout<<0<<endl;
            else cout<<min(ans, 2-evenCount)<<endl;
        }else
            cout<<ans<<endl;
    }
    return 0;
}