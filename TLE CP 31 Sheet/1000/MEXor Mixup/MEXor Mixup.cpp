#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int xor_upto(int n) {
    if (n % 4 == 0) return n;
    if (n % 4 == 1) return 1;
    if (n % 4 == 2) return n + 1;
    return 0;
}

int shortestLengthPossible(int a, int b) {
    int x = xor_upto(a - 1);  // XOR of [0..a-1]
    if (x == b) return a;
    if (x != b && (x ^ b) != a) return a + 1;
    return a + 2;
}

int main() {
    fast;
    int t; 
    cin >> t;
    while (t--) {
        int a, b;
        cin >> a >> b;
        cout << shortestLengthPossible(a, b) << "\n";
    }
    return 0;
}
