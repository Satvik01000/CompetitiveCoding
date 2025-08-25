#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperations(ll& a, ll& b){
    if(b>a) return 1;
    ll ans = INT_MAX;
    for(int add = 0; add<32; add++){
        ll operations = add;
        ll new_b = b+add;
        if(new_b==1) continue;
        ll temp = a;
        while(temp>0){
            temp/=new_b;
            operations++;
        }
        ans=min(ans, operations);
    }
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        ll a, b;
        cin>>a>>b;
        cout<<minOperations(a, b)<<endl;
    }
    return 0;
}