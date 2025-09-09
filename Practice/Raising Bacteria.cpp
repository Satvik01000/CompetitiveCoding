#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minPossibleAddition(int x){
    return __builtin_popcount(x);
}

int main() {
    fast;
    int x;
    cin>>x;
    cout<<minPossibleAddition(x)<<endl;
    return 0;
}
