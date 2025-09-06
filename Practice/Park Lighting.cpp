#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n, m;
        cin >> n >> m;
        ll cells = n * 1LL * m;
        cout << (cells + 1) / 2 << endl;
    }
    return 0;
}
