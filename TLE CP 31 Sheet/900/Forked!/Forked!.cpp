#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll numberOfPositions(ll a, ll b, ll xk, ll yk, ll xq, ll yq){
    ll dx[4] = {-1, 1, -1, 1}, dy[4] = {-1, -1, 1, 1};
    set<pair<ll, ll>> kingHits, queenHits;
    
    for(ll i = 0; i < 4; i++) {
        kingHits.insert({xk + dx[i]*a, yk + dy[i]*b});
        kingHits.insert({xk + dx[i]*b, yk + dy[i]*a});
        queenHits.insert({xq + dx[i]*a, yq + dy[i]*b});
        queenHits.insert({xq + dx[i]*b, yq + dy[i]*a});
    }

    ll ans = 0;
    for (auto& i : kingHits)
        if (queenHits.find(i) != queenHits.end())
            ans++;
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll a, b, xk, yk, xq, yq;
        cin >> a >> b >> xk >> yk >> xq >> yq;
        cout << numberOfPositions(a, b, xk, yk, xq, yq) << endl;
    }
    return 0;
}
