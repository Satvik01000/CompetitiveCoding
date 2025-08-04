#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int resultOfGame(vector<vector<ll>>& arrays) {
    int n = arrays.size();
    ll minFirst = LLONG_MAX;
    ll minSecond = LLONG_MAX;
    ll sumSecond = 0;

    for (int i = 0; i < n; i++) {
        minFirst = min(minFirst, arrays[i][0]);
        minSecond = min(minSecond, arrays[i][1]);
        sumSecond += arrays[i][1];
    }

    return sumSecond - minSecond + minFirst;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<ll>> arrays(n);
        for (int i = 0; i < n; i++) {
            int mi;
            cin >> mi;
            arrays[i].resize(mi);
            for (auto &x : arrays[i]) cin >> x;
            sort(arrays[i].begin(), arrays[i].end());
        }
        cout << resultOfGame(arrays) << endl;
    }
    return 0;
}
