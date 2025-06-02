#include<bits/stdc++.h>
using namespace std;

long long minDollars(long long x, long long y, long long a, long long b) {
    long long minXY = min(x, y);
    long long diffXY = (x > y) ? (x - y) : (y - x);

    if (b < 2 * a)
        return minXY * b + diffXY * a;
    else
        return (x + y) * a;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long x, y, a, b;
        cin >> x >> y >> a >> b;
        cout << minDollars(x, y, a, b) << endl;
    }
    return 0;
}