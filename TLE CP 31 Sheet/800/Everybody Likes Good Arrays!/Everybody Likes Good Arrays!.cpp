#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin>>t;
    while(t--) {
        int n,count=0;
        cin>>n;
        vector < int > v(n);
        for(int i = 0 ; i < n ;i++) cin>>v[i];
        for(int i = 0 ; i < n-1 ; i++) count+=(v[i]%2 == v[i+1]%2);
        cout<<count<<endl;
    }
    
    return 0;
}
