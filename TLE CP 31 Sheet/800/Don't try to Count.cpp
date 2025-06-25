#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minPossibleOperations(string x, const string& s) {
    int operations = 0;
    int maxLength = 25 + s.size(); // Safe upper bound as per constraints

    while (x.find(s) == string::npos && x.size() <= maxLength) {
        x += x;
        operations++;
    }

    return (x.find(s) != string::npos) ? operations : -1;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        cout << minPossibleOperations(x, s) << '\n';
    }
    return 0;
}
