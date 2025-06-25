#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperation(int n, string row){
    int dotCount=0;
    for(int i=0; i<n; i++){
        if(i+2<n && row[i]=='.' && row[i+1]=='.' && row[i+2]=='.') return 2;
        if(row[i]=='.') dotCount++;
    }

    return dotCount;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string row;
        cin>>row;
        cout<<minOperation(n, row)<<endl;
    }
    return 0;
}
