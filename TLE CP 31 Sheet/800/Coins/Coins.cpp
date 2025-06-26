#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(ll n, ll k){
    return (n%2!=0 && k%2==0) ? "NO" : "YES";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << possibleOrNot(n, k) << '\n';
    }
    return 0;
}
