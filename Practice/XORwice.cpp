#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int smallestPossibleValue(int a, int b){
    return a^b;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int a, b;
        cin>>a>>b;
        cout<<smallestPossibleValue(min(a, b), max(a, b))<<endl;
    }
    return 0;
}
