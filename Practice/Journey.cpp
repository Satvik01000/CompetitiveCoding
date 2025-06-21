#include <bits/stdc++.h>
using namespace std;
#define ll long long

int solve(ll n, int a, int b, int c) {
    vector<int> cycle = {a, b, c};
    ll sum = a + b + c;

    int fullCycles = n / sum;
    ll walked = fullCycles * sum;
    int day = fullCycles * 3;

    for (int i = 0; i < 3; ++i) {
        if (walked >= n) break;
        walked += cycle[i];
        day++;
    }

    return day;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n;
        int a, b, c;
        cin >> n >> a >> b >> c;
        cout << solve(n, a, b, c) << "\n";
    }

    return 0;
}
