#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n, k;
    cin>>n>>k;

    int ans = 0;
    while(n--) {
        ll a, b;
        cin>>a>>b;
        k+=(a*b)>=k ? 1 : 0;
    }
    cout<<ans<<endl;
    return 0;
}
