#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

string possibleOrNot(string& s) {
    int zeroCount = count(s.begin(), s.end(), '0');
    int oneCount = s.size() - zeroCount;
    int moves = min(zeroCount, oneCount);
    return (moves&1) ? "DA" : "NET";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << possibleOrNot(s) << '\n';
    }
    return 0;
}
