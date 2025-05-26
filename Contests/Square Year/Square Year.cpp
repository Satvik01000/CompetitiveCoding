#include <bits/stdc++.h>
using namespace std;

void squareYearOrNot(string& s) {
    int year = stoi(s);
    int root = sqrt(year);
    
    if (root * root != year) {
        cout << -1 << endl;
        return;
    }

    for (int a = 0; a <= root; ++a) {
        int b = root - a;
        if (a >= 0 && b >= 0) {
            cout << a << " " << b << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        squareYearOrNot(s);
    }
    return 0;
}
