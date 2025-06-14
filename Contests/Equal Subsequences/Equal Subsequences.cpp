#include<bits/stdc++.h>
using namespace std;
#define ll long long

string perfectBitstring(ll n, ll k) {
    if (k == 0) return string(n, '0');
    if (k == n) return string(n, '1');
    
    string ans;
    ans += '1';
    ans += string(n - k - 1, '0');
    ans += string(k - 1, '1');
    ans += '0';

    return ans;
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--){
        ll n, k;
        cin>>n>>k;
        cout<<perfectBitstring(n, k)<<endl;
    }
    return 0;
}