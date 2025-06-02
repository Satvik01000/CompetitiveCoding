#include <bits/stdc++.h>
using namespace std;

string minAfterInvert(string num) {
    int n = num.size();

    if (num[0] > '4' && num[0] != '9') {
        num[0] = '0' + (9 - (num[0] - '0'));
    }

    for (int i = 1; i < n; i++) {
        if (num[i] > '4') {
            num[i] = '0' + (9 - (num[i] - '0'));
        }
    }

    return num;
}

int main() {
    string x;
    cin >> x;
    cout << minAfterInvert(x) << endl;
    return 0;
}
