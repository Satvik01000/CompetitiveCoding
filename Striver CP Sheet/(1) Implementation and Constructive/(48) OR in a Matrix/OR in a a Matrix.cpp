#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> B(m, vector<int>(n));
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    // Step 1: Assume all A[i][j] = 1
    vector<vector<int>> A(m, vector<int>(n, 1));

    // Step 2: For every B[i][j] == 0, zero out entire row i and column j in A
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (B[i][j] == 0) {
                for (int k = 0; k < n; k++)
                    A[i][k] = 0;
                for (int k = 0; k < m; k++)
                    A[k][j] = 0;
            }
        }
    }

    // Step 3: Reconstruct B' from A and check if it matches the original B
    vector<vector<int>> B_check(m, vector<int>(n, 0));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            int row_or = 0, col_or = 0;
            for (int k = 0; k < n; k++)
                row_or |= A[i][k];
            for (int k = 0; k < m; k++)
                col_or |= A[k][j];
            B_check[i][j] = row_or | col_or;
        }
    }

    if (B_check == B) {
        cout << "YES\n";
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++)
                cout << A[i][j] << " ";
            cout << "\n";
        }
    } else {
        cout << "NO\n";
    }

    return 0;
}
