#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll minPossibleCost(vector<int>& a, vector<int>& b, int p, int n){
    vector<pair<ll, ll>> v(n);
    for(int i=0; i<n; i++) v[i]={b[i], a[i]};
    sort(v.begin(), v.end());

    ll cost = p, alreadyShared=1;
    for(auto& i : v){
        auto [costIncrement, peoples]=i;
        
        if(costIncrement>p) break;

        if(alreadyShared+peoples > n){
            cost+=(n-alreadyShared)*costIncrement;
            alreadyShared=n;
            break;
        }
        cost+=peoples*costIncrement;
        alreadyShared+=peoples;
    }
    cost+=(n-alreadyShared)*p;
    return cost;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin>>n>>p;
        vector<int> a(n), b(n);
        for(auto& i : a) cin>>i;
        for(auto& i : b) cin>>i;
        cout<<minPossibleCost(a, b, p, n)<<endl;
    }
    return 0;
}
