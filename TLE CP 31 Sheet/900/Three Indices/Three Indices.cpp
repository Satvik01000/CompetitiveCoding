#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) cin >> p[i];

        bool found = false;
        for (int i = 0; i < n - 2; i++) {
            if (p[i] < p[i + 1] && p[i + 1] > p[i + 2]) {
                cout << "YES\n";
                cout << i + 1 << " " << i + 2 << " " << i + 3 << "\n";
                found = true;
                break;
            }
        }

        if (!found)
            cout << "NO\n";
    }
    return 0;
}