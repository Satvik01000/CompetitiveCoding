#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> p(n), a(n);
        for(auto& i : p) cin>>i;
        for(auto& i : a) cin>>i;
        
        bool flag = false;

        if(p[0]!=a[0] && p[1]!=a[0]){
            cout<<"NO"<<endl;
            flag = true;
            break;
        }
        if(flag) continue;
        
        if(p[n-1]!=a[n-1] && p[n-2]!=a[n-1]){
            cout<<"NO"<<endl;
            flag = true;
            break;
        }
        if(flag) continue;

        for(int i = 1; i<n-1; i++){
            if(p[i]!=a[i] && p[i+1]!=a[i] && p[i-1]!=a[i]){
                cout<<"NO"<<endl;
                flag = true;
                break;
            }
        }
        if(flag) continue;
        cout<<"YES"<<endl;
    }
    return 0;
}