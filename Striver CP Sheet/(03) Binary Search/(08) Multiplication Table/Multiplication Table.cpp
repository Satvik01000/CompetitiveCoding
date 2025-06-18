#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
bool check(ll x, ll n, ll m, ll k) {
    ll cnt = 0;
    for (ll i = 1; i <= n; i++)
        cnt += min(x / i, m);
    return cnt>=k;
}
 
int main() {
    ll n, m, k;
    cin >> n >> m >> k;
 
    ll low = 1, high = n * m, ans;
 
    while(low <= high){
        ll mid = (low + high) / 2;
 
        if(check(mid, n, m, k)){
            ans = mid;
            high = mid - 1;
        }else
            low = mid + 1;
    }
    cout << ans << endl;
    return 0;
}