#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string whoWillLoose(int a, int b, int c){
    if(a==b)
        return c%2==0 ? "Second" : "First";
    return a>b ? "First" : "Second";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin>>a>>b>>c;
        cout<<whoWillLoose(a, b, c)<<endl;
    }
    return 0;
}
