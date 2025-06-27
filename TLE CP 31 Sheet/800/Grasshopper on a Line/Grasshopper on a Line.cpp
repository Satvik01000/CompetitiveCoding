#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void solve(int x, int k){
    if(x%k!=0){
        cout<<1<<endl<<x<<endl;
        return;
    }
    cout<<2<<endl;
    cout<<x+(k-1)<<" "<<-1*(k-1)<<endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int x, k;
        cin>>x>>k;
        solve(x, k);
    }
    return 0;
}
