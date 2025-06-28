#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(ll n, ll k, ll x){
    if(x>=(k*(k+1))/2 && x<=k*(n + (n-(k-1)))/2) return "YES";
    return "NO";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin>>n>>k>>x;
        cout<<possibleOrNot(n, k, x)<<endl;
    }
    return 0;
}
