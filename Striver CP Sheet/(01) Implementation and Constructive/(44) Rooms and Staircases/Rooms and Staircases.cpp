#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int maxRooms = n; // Default: stay on one floor

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                // Consider both left and right side traversals
                int leftPath = 2 * (i + 1);
                int rightPath = 2 * (n - i);
                maxRooms = max({maxRooms, leftPath, rightPath});
            }
        }

        cout << maxRooms << endl;
    }

    return 0;
}
