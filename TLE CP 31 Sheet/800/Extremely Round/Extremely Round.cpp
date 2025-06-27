#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int numberOfExtremelyRound(int n) {
    int count = 0;
    for (int d = 1; d <= 9; ++d) {
        int x = d;
        while (x <= n) {
            count++;
            x *= 10;
        }
    }
    return count;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << numberOfExtremelyRound(n) << endl;
    }
    return 0;
}
