#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

void pillarHeights(int n){
    int msb = log2(n);
    int threshold = (1 << msb);
    
    for(int i = threshold - 1; i >= 0; i--) cout << i << " ";
    for(int i = threshold; i <= n; i++) cout << i << " ";
    cout << "\n";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        pillarHeights(n-1);
    }
    return 0;
}