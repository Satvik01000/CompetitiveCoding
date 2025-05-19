#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    int sum = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i] / 2; // integer division truncates toward zero
        sum += b[i];
    }

    for (int i = 0; i < n && sum != 0; i++) {
        if (a[i] % 2 != 0) {
            // if we truncated down, adjust toward ceil
            if (a[i] > 0) b[i]++;  // from floor to ceil
            else b[i]--;          // from ceil to floor for negative
            sum += (a[i] > 0) ? 1 : -1;
        }
    }

    for (int x : b)
        cout << x << '\n';

    return 0;
}
