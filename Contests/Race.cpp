#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(int a, int x, int y){
    return (min(x, y) < a && a < max(x, y)) ? "NO" : "YES";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int a, x, y;
        cin >> a >> x >> y;
        cout << possibleOrNot(a, x, y) << endl;
    }
    return 0;
}
