#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    vector<int> freq(k + 1, 0);

    // Read students' favorite drinks
    for (int i = 0; i < n; i++) {
        int drink;
        cin >> drink;
        freq[drink]++;
    }

    int total_pairs = 0, singles = 0;

    // Count total full pairs and singles
    for (int i = 1; i <= k; i++) {
        total_pairs += freq[i] / 2;
        if (freq[i] % 2 != 0) {
            singles++;
        }
    }

    int sets = (n + 1) / 2;  // ceil(n / 2)
    int used_pairs = min(total_pairs, sets);
    int remaining_sets = sets - used_pairs;
    int result = 2 * used_pairs + min(remaining_sets, singles);

    cout << result << endl;
    return 0;
}
