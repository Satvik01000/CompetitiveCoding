#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int x, y;
    cin>>x>>y;
    int ans = (x+y)%12;
    if(ans==0) ans=12;
    cout<<ans<<endl;
    return 0;
}
