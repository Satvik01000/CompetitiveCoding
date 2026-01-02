#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string decimalToBinary(int x, int n) {
    string ans;

    if (x == 0) ans = "0";
    else {
        while (x > 0) {
            ans += char('0' + (x % 2));
            x /= 2;
        }
        reverse(ans.begin(), ans.end());
    }

    if ((int)ans.size() < n) ans = string(n - ans.size(), '0') + ans;
    return ans;
}

int main() {
    fast;
    int n;
    cin >> n;

    int finalNum = (1 << n);
    for (int i = 0; i < finalNum; i++) {
        int g = i ^ (i >> 1);
        cout << decimalToBinary(g, n) << '\n';
    }
    return 0;
}