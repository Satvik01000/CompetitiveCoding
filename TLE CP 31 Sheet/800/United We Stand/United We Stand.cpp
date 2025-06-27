#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void solve(vector<int>& a, int n){
    sort(a.begin(), a.end());
    
    if(a[0] == a[n-1]){ // all elements same
        cout << -1 << endl;
        return;
    }

    vector<int> b, c;
    int max_val = a[n - 1];
    for (int i = 0; i < n; ++i) {
        if (a[i] == max_val) c.push_back(a[i]);
        else b.push_back(a[i]);
    }

    if (b.empty() || c.empty()) {
        cout << -1 << endl;
        return;
    }

    cout << b.size() << " " << c.size() << endl;
    for (int& i : b) cout << i << " ";
    cout << endl;
    for (int& i : c) cout << i << " ";
    cout << endl;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n);
        for(auto& i : a) cin>>i;
        solve(a, n);
    }
    return 0;
}
