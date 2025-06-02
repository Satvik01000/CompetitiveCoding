#include <bits/stdc++.h>
using namespace std;

long long luckyNumbers(int n) {
    return 2 * ((1LL << n) - 1);
}

int main() {
    int n;
    cin >> n;
    cout << luckyNumbers(n) << endl;
    return 0;
}
