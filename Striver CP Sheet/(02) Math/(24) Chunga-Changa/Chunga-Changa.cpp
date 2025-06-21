#include <bits/stdc++.h>
using namespace std;

pair<long long, long long> helper(long long x, long long y, long long z) {
    long long numCoconuts1 = x / z;
    long long numCoconuts2 = y / z;
    
    long long rem1 = x % z;
    long long rem2 = y % z;

    long long totalCoconuts = numCoconuts1 + numCoconuts2;
    long long extra = 0;

    if (rem1 + rem2 >= z) {
        extra = min(z - rem1, z - rem2);
        totalCoconuts += 1;
    }

    return {totalCoconuts, extra};
}

int main() {
    long long x, y, z;
    cin >> x >> y >> z;

    pair<long long, long long> ans = helper(x, y, z);
    cout << ans.first << " " << ans.second << endl;

    return 0;
}
