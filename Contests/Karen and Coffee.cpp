#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
#define size 2*1e5

int main() {
    fast;
    int n, k, q;
    cin>>n>>k>>q;
    vector<pair<int, int>> recipes(n);
    vector<int> diff(size);
    
    for(int i=0; i<n; i++){
        int l, r;
        cin>>l>>r;
        l--; r--;
        diff[l]++;
        if(r!=size-1) diff[r+1]--;
    }
    
    for(int i=1; i<size; i++) diff[i]+=diff[i-1];
    vector<int> validTemps(size, 0);
    if(diff[0]>=k) validTemps[0]=1;
    for(int i=1; i<size; i++){
        if(diff[i]>=k) validTemps[i]++;
        validTemps[i]+=validTemps[i-1];
    }

    while(q--){
        int a, b;
        cin>>a>>b;
        a--; b--;
        int ans=validTemps[b];
        if(a>0) ans-=validTemps[a-1];
        cout<<ans<<endl;
    }
    return 0;
}