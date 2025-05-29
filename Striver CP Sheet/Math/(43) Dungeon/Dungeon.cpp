#include <bits/stdc++.h>
using namespace std;

string possibleOrNot(int a, int b, int c) {
    int total = a + b + c;
    if (total % 9 != 0)
        return "NO";
    int k = total / 9;
    if (min({a, b, c}) < k)
        return "NO";
    return "YES";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << possibleOrNot(a, b, c) << endl;
    }
    return 0;
}