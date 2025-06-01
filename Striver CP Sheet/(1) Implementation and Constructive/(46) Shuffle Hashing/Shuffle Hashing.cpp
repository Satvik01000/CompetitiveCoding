#include <bits/stdc++.h>
using namespace std;

string possibleOrNot(string p, string h) {
    int m = p.size(), n = h.size();
    if (n < m) return "NO";

    vector<int> freqP(26, 0), freqH(26, 0);

    for (char c : p) freqP[c - 'a']++;

    for (int i = 0; i < m; i++)
        freqH[h[i] - 'a']++;

    if (freqH == freqP)
        return "YES";

    for (int i = m; i < n; i++) {
        freqH[h[i] - 'a']++;
        freqH[h[i - m] - 'a']--;

        if (freqH == freqP)
            return "YES";
    }

    return "NO";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string p, h;
        cin >> p >> h;
        cout << possibleOrNot(p, h) << endl;
    }
    return 0;
}
