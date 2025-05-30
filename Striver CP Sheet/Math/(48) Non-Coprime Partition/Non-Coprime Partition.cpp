#include <bits/stdc++.h>
using namespace std;

void possibleOrNot(int n) {
    // Case where it's impossible to form two non-empty sets
    if (n <= 2) {
        cout << "No\n";
        return;
    }

    // Total sum of numbers from 1 to n
    long long total = 1LL * n * (n + 1) / 2;

    // Try to find the smallest divisor > 1 of the total sum
    int d = -1;
    for (int i = 2; i <= n; ++i) {
        if (total % i == 0) {
            d = i;
            break;
        }
    }

    long long target = total / d;
    vector<int> set1, set2;
    long long sum = 0;

    // Greedily fill set1 until its sum becomes equal to target
    for (int i = n; i >= 1; --i) {
        if (sum + i <= target) {
            set1.push_back(i);
            sum += i;
        } else {
            set2.push_back(i);
        }
    }

    cout << "Yes\n";

    // Print set1
    cout << set1.size() << " ";
    for (int x : set1) cout << x << " ";
    cout << "\n";

    // Print set2
    cout << set2.size() << " ";
    for (int x : set2) cout << x << " ";
    cout << "\n";
}

int main() {
    int n;
    cin >> n;

    possibleOrNot(n);
    return 0;
}
