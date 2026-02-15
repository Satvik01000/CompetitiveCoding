#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n, t;
    cin>>n>>t;
    
    ll ans = 0;
    while(n--){
        ll a, b;
        cin>>a>>b;
        ans += max(0LL, a-(b*t));
    }
    cout<<ans<<endl;
    return 0;
}
