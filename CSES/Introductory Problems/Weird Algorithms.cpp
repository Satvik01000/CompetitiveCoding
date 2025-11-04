#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(ll n){
    while(true){
        cout<<n<<" ";
        if(n==1) return;
        if(n&1) n = (n*3 + 1);
        else n/=2;
    }
}

int main() {
    fast;
    ll n;
    cin>>n;
    helper(n);
    return 0;
}
