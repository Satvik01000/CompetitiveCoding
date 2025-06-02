#include <bits/stdc++.h>
using namespace std;

pair<int, int> minMaxDigits(long long num) {
    int minDigit = 9, maxDigit = 0;
    while (num > 0) {
        int d = num % 10;
        minDigit = min(minDigit, d);
        maxDigit = max(maxDigit, d);
        num /= 10;
    }
    return {minDigit, maxDigit};
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a1, k;
        cin >> a1 >> k;

        long long curr = a1;
        for (long long i = 1; i < k; i++) {
            auto [mn, mx] = minMaxDigits(curr);
            if (mn == 0) break;
            curr += 1LL * mn * mx;
        }

        cout << curr << '\n';
    }

    return 0;
}
