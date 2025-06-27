#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

vector<int> solve(vector<int>& a, int n){
    vector<int> b;
    for(int i=0; i<a.size(); i++)
        b.push_back(n+1-a[i]);
    return b;
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
        vector<int> b = solve(a, n);
        for(int& i : b) cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
