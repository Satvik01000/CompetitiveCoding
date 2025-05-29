#include <bits/stdc++.h>
using namespace std;

int minPossibleDollars(vector<int>& pylonHeights) {
    return *max_element(pylonHeights.begin(), pylonHeights.end());
}

int main() {
    int n;
    cin >> n;
    vector<int> pylonHeights(n);
    for (int& h : pylonHeights) cin >> h;
    cout << minPossibleDollars(pylonHeights) << endl;
    return 0;
}
