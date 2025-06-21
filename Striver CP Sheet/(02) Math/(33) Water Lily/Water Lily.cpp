#include <bits/stdc++.h>
using namespace std;

double depthCalculator(double h, double l) {
    return (l * l - h * h) / (2 * h);
}

int main() {
    double h, l;
    cin >> h >> l;

    cout << fixed << setprecision(10) << depthCalculator(h, l) << endl;
    return 0;
}
