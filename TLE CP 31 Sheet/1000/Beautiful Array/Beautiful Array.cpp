#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void beautifulArray(int n, ll k, ll b, ll s){
    if(s < b * k || s > b * k + (n * (k - 1))){
        cout << -1 << "\n";
        return;
    }

    vector<ll> ans(n, 0);
    ans[0] = b * k;
    s -= ans[0];

    for(int i = 0; i < n && s > 0; i++){
        ll add = min(s, (k - 1));
        ans[i] += add;
        s -= add;
    }

    for(auto x : ans) cout << x << " ";
    cout << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k, b;
        ll s;
        cin >> n >> k >> b >> s;
        beautifulArray(n, k, b, s);
    }
    return 0;
}