#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int minMoves = (n + 1) / 2;
    int moves = ceil((double)minMoves / m) * m;

    cout<<(moves > n ? -1 : moves)<<endl;
    return 0;
}
