#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string hasOddDivisorOrNot(ll n){
    for(int i=3; i<=9; i+=2) if((n%i)==0) return "YES";
    while(n>0 && !(n&1)) n/=2;
    if(n==1) return "NO";
    return "YES";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        cout<<hasOddDivisorOrNot(n)<<endl;
    }
    return 0;
}
