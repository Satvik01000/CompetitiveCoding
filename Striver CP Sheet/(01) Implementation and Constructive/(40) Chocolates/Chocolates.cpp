#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    ll ans = 0;
    ll last = 1e18;

    for(int i = n - 1; i >= 0; i--){
        last = min(last - 1, a[i]);
        if(last < 0) last = 0;
        ans += last;
    }

    cout << ans << endl;
    return 0;
}
