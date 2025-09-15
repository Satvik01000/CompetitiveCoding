#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int maxMoneyWithdrawn(int x, int c) {
    int ans = x / (1000 + c);
    return 1000 * ans;
}

int main() {
    fast;
    int x, c;
    cin >> x >> c;
    cout << maxMoneyWithdrawn(x, c) << "\n";
    return 0;
}
