#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> helper(int a, int b, int c) {
    long long g = pow(10, c - 1);             // GCD with c digits
    long long x = g * pow(10, a - c);         // x has a digits
    long long y = g * (pow(10, b - c) + 1);    // y has b digits, and GCD(x, y) = g
    return {x, y};
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        auto [x, y] = helper(a, b, c);
        cout << x << " " << y << endl;
    }
    return 0;
}
