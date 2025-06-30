#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int minCost(string& s) {
    int maxLen = 0, curr = 0;
    for (int i = 0; i < s.size(); i++) {
        if (i > 0 && s[i] != s[i - 1]) curr = 0;
        curr++;
        maxLen = max(maxLen, curr);
    }
    return maxLen + 1;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minCost(s) << '\n';
    }
    return 0;
}