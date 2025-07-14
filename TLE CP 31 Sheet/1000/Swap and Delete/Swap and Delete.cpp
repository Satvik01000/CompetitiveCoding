#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minCost(string& s, int n){
    int zeroCount = 0, oneCount = 0;
    for(auto& i : s) i=='1' ? oneCount++ : zeroCount++;
    
    if(zeroCount==oneCount) return 0;
    
    ll ans = 0;
    for(auto& i : s){
        if(i=='0' && oneCount>0){
            oneCount--;
            ans++;
        }else if(i=='1' && zeroCount>0){
            zeroCount--;
            ans++;
        }else break;
    }
    return n - ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        cout<<minCost(s, s.size())<<endl;
    }
    return 0;
}
