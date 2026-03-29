#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(vector<int>& a, vector<int>& b, const int& n){
    int need = 0, extra = 0;
    for(int i = 0; i<n; i++) {
        if(b[i]>a[i]) need+=(b[i]-a[i]);
        else extra+=(a[i]-b[i]);
    }
    return extra>=need ? "YES" : "NO";
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
        cout<<possibleOrNot(a, b, n)<<endl;
    }
    return 0;
}