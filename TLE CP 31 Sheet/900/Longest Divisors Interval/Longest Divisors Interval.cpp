#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int maxPossibleLength(ll n){
    int i=1;
    while(n%i==0) i++;
    return i-1;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        cout<<maxPossibleLength(n)<<endl;
    }
    return 0;
}
