#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minMoves(int n){
    if(n == 1) return 0;

    int twoCount = 0, threeCount = 0;

    while(!(n&1)) {
        n /= 2;
        twoCount++;
    }

    while(n % 3 == 0) {
        n /= 3;
        threeCount++;
    }

    if(n != 1 || twoCount > threeCount) return -1;
    return (threeCount - twoCount) + threeCount;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << minMoves(n) << '\n';
    }
    return 0;
}