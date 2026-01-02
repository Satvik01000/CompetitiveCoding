#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n;
    cin >> n;
    
    ll ans = 0;
    
    while (n >= 5) {
        ans += n / 5;
        n /= 5;
    }
    
    cout << ans << endl;
    return 0;
}