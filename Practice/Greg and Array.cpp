#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n, m, k;
    cin >> n >> m >> k;

    vector<ll> nums(n);
    for (auto& i : nums) cin>>i;

    vector<tuple<int,int,ll>> operations(m);
    for (int i = 0; i < m; i++) {
        int l, r; ll d;
        cin >> l >> r >> d;
        operations[i] = {l-1, r-1, d};
    }

    // Count how many times each operation is applied
    vector<ll> opCount(m, 0);
    while(k--){
        int x, y;
        cin >> x >> y;
        x--; y--;
        opCount[x]++;
        if (y < m-1) opCount[y+1]--;
    }

    for (int i = 1; i < m; i++) opCount[i] += opCount[i-1];

    // Apply operations to array using difference array
    vector<ll> diff(n+1, 0);
    for (int i = 0; i < m; i++) {
        auto [l, r, d] = operations[i];
        ll times = opCount[i];
        diff[l] += d * times;
        if (r+1 < n) diff[r+1] -= d * times;
    }

    for (int i = 1; i < n; i++) diff[i] += diff[i-1];
    for (int i = 0; i < n; i++) nums[i] += diff[i];

    for (int i = 0; i < n; i++) cout << nums[i] << " ";
    cout << "\n";

    return 0;
}
