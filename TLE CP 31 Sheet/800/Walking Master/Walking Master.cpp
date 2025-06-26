#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperations(int a, int b, int c, int d){
    if(b>d) return -1;
    int moves=0;
    moves+=(d-b);
    a+=moves;
    if(a<c) return -1;
    moves+=(a-c);
    return moves;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        cout<<minOperations(a, b, c, d)<<endl;
    }
    return 0;
}
