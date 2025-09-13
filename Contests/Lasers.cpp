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
        ll x, y;
        cin>>n>>m>>x>>y;
        vector<int> a(n), b(m);
        int count = 0;
        for(auto& i : a){
            cin>>i;
            if(i<=y) count++;
        }
        for(auto& i : b) {
            cin>>i;
            if(i<=x) count++;
        }
        cout<<count<<endl;
    }
    return 0;
}
