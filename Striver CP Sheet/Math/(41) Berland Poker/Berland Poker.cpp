#include <bits/stdc++.h>
using namespace std;

int maxPoints(int n, int m, int k) {
    int cardsPerPlayer = n / k;
    int maxJokers = min(m, cardsPerPlayer);
    int remainingJokers = m - maxJokers;

    int maxJokersOtherPlayer = ceil((double)remainingJokers / (k - 1));
    return maxJokers - maxJokersOtherPlayer;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        cout << maxPoints(n, m, k) << endl;
    }
    return 0;
}
