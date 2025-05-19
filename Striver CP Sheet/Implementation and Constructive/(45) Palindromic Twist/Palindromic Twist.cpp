#include <bits/stdc++.h>
using namespace std;

bool canMakePalindrome(string& s) {
    int n = s.size();
    for (int i = 0; i < n / 2; i++) {
        int diff = abs(s[i] - s[n - i - 1]);
        if (diff != 0 && diff != 2)
            return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << (canMakePalindrome(s) ? "YES" : "NO") << endl;
    }
}