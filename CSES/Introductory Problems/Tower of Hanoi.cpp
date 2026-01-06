#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void towerOfHanoi(int n, int a, int b, int c, vector<vector<int>>& ans){
    if(n == 0) return;
    towerOfHanoi(n-1, a, c, b, ans);
    ans.push_back({a, c});
    towerOfHanoi(n-1, b, a, c, ans);
}

int main() {
    fast;
    int n;
    cin>>n;
    vector<vector<int>> ans;
    towerOfHanoi(n, 1, 2, 3, ans);
    cout<<ans.size()<<endl;
    for(auto& i : ans) cout<<i[0]<<" "<<i[1]<<endl;
    return 0;
}