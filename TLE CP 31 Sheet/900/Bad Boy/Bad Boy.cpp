#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int solve(int a, int b, int c, int d, int i, int j){
    return abs(i - a) + abs(i - c) + abs(j - b) + abs(j - d);
}
 
int main(){
    int t, n, m, i, j;
    cin >> t;
    while(t--){
        cin >> n >> m >> i >> j;
        if(solve(1, 1, n, m, i, j) >= solve(1, m, n, 1, i, j))
            cout << 1 << " " << 1 << " " << n << " " << m << endl;
        else
            cout << n << " " << 1 << " " << 1 << " " << m << endl;
    }
    return 0;
}