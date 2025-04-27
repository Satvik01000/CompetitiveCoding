#include <bits/stdc++.h>
using namespace std;

long long countValidPositions(vector<int>& a, long long x, int n, int k) {
    vector<long long> prefix(2 * n + 1, 0);
    
    for (int i = 1; i <= n; i++)
        prefix[i] = prefix[i - 1] + a[i - 1];

    long long totalSum = prefix[n];
    long long result = 0;

    for (int start = 0; start < n; start++) {
        long long sum = 0;
        for (int copies = 0; copies < k; copies++) {
            sum += totalSum;
            if (sum >= x) {
                result += (n * k) - (start + copies * n);
                break;
            }
            for (int end = start + 1; end < n; end++) {
                sum += a[end];
                if (sum >= x) {
                    result += (n * k) - (end + copies * n);
                    break;
                }
            }
        }
    }

    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        long long x;
        cin >> n >> k >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        cout << countValidPositions(a, x, n, k) << endl;
    }
    return 0;
}
