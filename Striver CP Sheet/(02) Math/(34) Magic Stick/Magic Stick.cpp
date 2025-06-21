#include <bits/stdc++.h>
using namespace std;

string possibleOrNot(int x, int y) {
    if (x == y)
        return "YES";
    if (x == 1)
        return y == 1 ? "YES" : "NO";
    if (x == 2 || x == 3)
        return y <= 3 ? "YES" : "NO";
    return "YES"; // x >= 4
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        cout << possibleOrNot(x, y) << endl;
    }
    return 0;
}