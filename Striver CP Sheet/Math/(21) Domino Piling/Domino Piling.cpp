#include <bits/stdc++.h>
using namespace std;

int maxDominos(int m, int n) {
    return (m * n) / 2;
}

int main() {
    int n, m;
    cin >> n >> m;

    cout << maxDominos(n, m) << endl;
    return 0;
}