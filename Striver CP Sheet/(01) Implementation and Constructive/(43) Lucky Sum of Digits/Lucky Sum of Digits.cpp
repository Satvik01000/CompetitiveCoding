#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int bestX = -1, bestY = -1;

    // Try all possible values of x (number of 7s)
    for (int x = n / 7; x >= 0; x--) {
        int remaining = n - 7 * x;

        // Check if the remaining can be formed using 4s
        if (remaining % 4 == 0) {
            int y = remaining / 4;
            bestX = x;
            bestY = y;
            break; // First valid pair (minimal digits) found
        }
    }

    cout<<bestX<<" "<<bestY<<endl;
    if (bestX == -1) {
        cout << -1 << endl;
    } else {
        cout << string(bestY, '4') + string(bestX, '7') << endl;
    }

    return 0;
}