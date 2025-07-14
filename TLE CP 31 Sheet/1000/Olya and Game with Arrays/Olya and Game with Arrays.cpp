#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll globalFirstMin = LLONG_MAX, globalSecondMin = LLONG_MAX;
        ll sumSeconds = 0;

        while (n--) {
            int mi;
            cin >> mi;
            vector<ll> nums(mi);
            ll firstMinTemp = LLONG_MAX, secondMinTemp = LLONG_MAX;
            for (auto &i : nums) cin >> i;
            for (auto &i : nums) {
                if (i < firstMinTemp) {
                    secondMinTemp = firstMinTemp;
                    firstMinTemp = i;
                } else if (i < secondMinTemp) {
                    secondMinTemp = i;
                }
            }
            if (secondMinTemp == LLONG_MAX) secondMinTemp = firstMinTemp;

            globalFirstMin = min(globalFirstMin, firstMinTemp);
            globalSecondMin = min(globalSecondMin, secondMinTemp);
            sumSeconds += secondMinTemp;
        }

        ll answer = sumSeconds - globalSecondMin + globalFirstMin;
        cout << answer << "\n";
    }
    return 0;
}