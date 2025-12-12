#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll nC2(int n){
    ll num = 1LL * n * n;
    return num * (num - 1) / 2;
}

ll possibleWays(int k){
    if(k <= 0) return 0;
    return nC2(k) - 4LL * (k - 1) * (k - 2);
}

int main() {
    fast;
    int n;
    if(!(cin >> n)) return 0;
    for(int i = 1; i <= n; ++i){
        cout << possibleWays(i) << '\n';
    }
    return 0;
}
