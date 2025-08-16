#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
#define ll long long

pair<ll, ll> helper(ll n) {
    if (n % 2 == 0) return {n / 2, n / 2};
    
    ll smallestDiv = -1;
    for (ll i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            smallestDiv = i;
            break;
        }
    }
    
    if (smallestDiv == -1) return {1, n - 1};
    
    ll a = n / smallestDiv;
    return {a, n - a};
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        auto [a, b] = helper(n);
        cout << a << " " << b << "\n";
    }
    return 0;
}
