#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string validString(const int& n, int r, int b){
    string ans="";
    while(b>0){
        int temp = r/(b+1);
        r-=temp;
        for(int i=1; i<=temp; i++) ans+="R";
        ans+="B";
        b--;
    }
    while(r--) ans+="R";
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, r, b;
        cin>>n>>r>>b;
        cout<<validString(n, r, b)<<endl;
    }
    return 0;
}