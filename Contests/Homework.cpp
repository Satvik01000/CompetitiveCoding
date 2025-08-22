#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        string a, b, c;
        cin>>n>>a>>m>>b>>c;
        string ans="";
        string vlad="", dima="";
        int v=0, d=m-1;
        for(int i=0; i<m; i++){
            if(c[i]=='V') vlad+=b[i];
            else dima+=b[i];
        }
        reverse(vlad.begin(), vlad.end());
        ans+=vlad;
        ans+=a;
        ans+=dima;
        cout<<ans<<endl;
    }
    return 0;
}
