#include <bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(false); cin.tie(nullptr);

long long digitSum(long long n) {
    long long s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int main() {
    fast;
    int t;
    cin >> t;
    
    while (t--) {
        long long x;
        cin >> x;

        int ans = 0;

        for (int s = 0; s <= 90; s++) {
            long long y = x + s;
            if (digitSum(y) == s) ans++;
        }

        cout << ans <<endl;
    }

    return 0;
}
