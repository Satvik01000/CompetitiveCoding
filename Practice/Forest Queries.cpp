#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int main() {
    fast;
    int n, q;
    cin >> n >> q;
    vector<vector<int>> grid(n, vector<int>(n));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            char c;
            cin >> c;
            grid[i][j] = (c == '*' ? 1 : 0);
        }
    }

    vector<vector<int>> prefix(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            prefix[i][j] = grid[i][j];
            if(i > 0) prefix[i][j] += prefix[i-1][j];
            if(j > 0) prefix[i][j] += prefix[i][j-1];
            if(i > 0 && j > 0) prefix[i][j] -= prefix[i-1][j-1];
        }
    }

    while(q--){
        int y1, x1, y2, x2;
        cin >> y1 >> x1 >> y2 >> x2;
        y1--; x1--; y2--; x2--;
        
        int ans = prefix[y2][x2];
        if(y1 > 0) ans -= prefix[y1-1][x2];
        if(x1 > 0) ans -= prefix[y2][x1-1];
        if(y1 > 0 && x1 > 0) ans += prefix[y1-1][x1-1];
        
        cout << ans << "\n";
    }
    return 0;
}
