#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    string n;
    cin>>n;
    int ans = 1;
    int len=1;
    for(int i = 1; i<n.size(); i++){
        if(n[i-1]!=n[i]) {
            ans=max(ans, len);
            len=0;
        }
        len++;
    }
    ans=max(ans, len);
    cout<<ans<<endl;
    return 0;
}
