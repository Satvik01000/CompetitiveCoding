#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(vector<vector<char>>& grid, const int& n, const int& m){
    if(grid[0][0] == grid[n-1][m-1] || grid[0][m-1] == grid[n-1][0]) return "YES";
    bool flag = true;
    for(int i=0; i<m-1; i++){
        if(grid[0][i]!=grid[0][i+1] || grid[n-1][i]!=grid[n-1][i+1]) {
            flag = false;
            break;
        }
    }
    if(flag) return "NO";
    flag = true;
    for(int i = 0; i<n-1; i++){
        if(grid[i][0]!=grid[i+1][0] || grid[i][m-1]!=grid[i+1][m-1]){
            flag=false;
            break;
        }
    }
    if(flag) return "NO";
    return "YES";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        vector<vector<char>> grid(n, vector<char>(m));
        for(int i = 0; i<n; i++)
            for(int j=0; j<m; j++) cin>>grid[i][j];
        cout<<possibleOrNot(grid, n, m)<<endl;
    }
    return 0;
}
