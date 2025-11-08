#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int helper(int h, int b){
    return b>h ? 0 : h-b;
}

int main() {
    fast;
    int h, b;
    cin>>h>>b;
    cout<<helper(h, b)<<endl;
    return 0;
}
