#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;

    long long tilesAlongN = (n + a - 1) / a;
    long long tilesAlongM = (m + a - 1) / a;

    cout << tilesAlongN * tilesAlongM << endl;

    return 0;
}