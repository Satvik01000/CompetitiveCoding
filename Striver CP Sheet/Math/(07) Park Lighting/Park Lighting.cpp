#include <bits/stdc++.h>
using namespace std;

int numberOfLights(int n, int m) {
    return (n * m + 1) / 2; // i.e. the ceil of the number
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        cout << numberOfLights(n, m) << "\n";
    }
    return 0;
}
