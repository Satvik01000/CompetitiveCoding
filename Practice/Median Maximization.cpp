#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n , s;
        cin >> n >> s;
        cout << s / (n / 2 + 1) << endl;
    }
    return 0;
}
