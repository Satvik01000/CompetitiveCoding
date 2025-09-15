#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(vector<int>& a, vector<int>& b, const int& n){

}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(auto& i : a) cin>>i;
        for(auto& i : b) cin>>i;
        helper(a, b, n);
    }
    return 0;
}
