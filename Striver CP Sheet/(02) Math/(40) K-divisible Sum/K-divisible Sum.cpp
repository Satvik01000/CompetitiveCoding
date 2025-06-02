#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        long long sum = ((n + k - 1) / k) * k; // smallest multiple of k ≥ n
        cout << (sum + n - 1) / n << '\n';     // ceil(sum / n)
    }
    return 0;
}
