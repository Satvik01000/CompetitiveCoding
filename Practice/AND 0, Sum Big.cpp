#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
const int mod = 1LL*(1e9 + 7);
int numberOfArrays(int n, int k){
    if(k==0) return 1;
    ll ans = numberOfArrays(n, k-1);
    ans%=mod;
    ans*=n;
    ans%=mod;
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        cout<<numberOfArrays(n, k)<<endl;
    }
    return 0;
}
