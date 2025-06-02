#include <bits/stdc++.h>
using namespace std;

void possibleOrNot(const vector<long long>& nums) {
    for (auto& x : nums) {
        if (x >= 15 && x % 14 >= 1 && x % 14 <= 6)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    vector<long long> nums(t);
    for (long long& i : nums)
        cin >> i;

    possibleOrNot(nums);
    return 0;
}
