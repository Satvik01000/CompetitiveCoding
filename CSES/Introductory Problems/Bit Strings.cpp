#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

const int MOD = 1000000007;

int main() {
    fast;
    int n;
    cin >> n;
    
    ll ans = 1;
    while(n--) ans = (ans * 2) % MOD;
    
    cout << ans << endl;
    return 0;
}