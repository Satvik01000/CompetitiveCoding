#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define ull unsigned long long
void helper(ll n){
    if(n==0){
        cout << "6 10 1 3\n";
        return;
    }
    ull c = 1ULL << 59;
    ull d = c|n;
    ll a = 1, b = 2;
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        helper(n);
    }
    return 0;
}
