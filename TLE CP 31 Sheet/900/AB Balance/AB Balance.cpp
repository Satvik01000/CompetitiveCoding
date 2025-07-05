#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string balanceAB(string& s){
    int n = s.size();
    s[n-1] = s[0];
    return s;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        cout<<balanceAB(s)<<endl;
    }
    return 0;
}
