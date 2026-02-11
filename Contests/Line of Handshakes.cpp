#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n;
    cin>>n;
    vector<pair<int, int>> gloves(n);

    for(auto& i : gloves){
        char a, b;
        cin>>a>>b;
        i={a, b};
    }

    int ans = 0;
    for(int i = 1; i<n; i++) {
        if(gloves[i].first==gloves[i-1].second) ans++;
    }
    cout<<ans<<endl;
    return 0;
}
