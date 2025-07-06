#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fast;
    int t;
    cin >> t;

    while (t--) {
        int n;
        ll px, py, qx, qy;
        cin >> n >> px >> py >> qx >> qy;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        ll mx = a[0];
        ll mn = a[0];
        
        for (int i = 1; i < n; ++i) {
            int x = a[i];
            if (x >= mx) {
                mn = x - mx;
            } else if (x >= mn) {
                mn = 0;
            } else {
                mn -= x;
            }
            mx += x;
        }

        ll dx = px - qx, dy = py - qy;
        ll dSquared = dx * dx + dy * dy;

        if (dSquared <= mx * mx && dSquared >= mn * mn) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}