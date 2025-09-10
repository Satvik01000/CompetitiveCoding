#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll finalCoordinate(ll n, ll x){
    long long finalPos;
    if (n % 4 == 1) finalPos = -n;
    else if (n % 4 == 2) finalPos = 1;
    else if (n % 4 == 3) finalPos = n + 1;
    else if (n % 4 == 0) finalPos = 0;

    if (x % 2 == 0) finalPos = x + finalPos;
    else finalPos = x - finalPos;
    return finalPos;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n, x;
        cin>>x>>n;
        cout<<finalCoordinate(n, x)<<endl;
    }
    return 0;
}
