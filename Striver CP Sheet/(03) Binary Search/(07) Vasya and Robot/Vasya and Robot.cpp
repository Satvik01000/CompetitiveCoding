#include <bits/stdc++.h>
using namespace std;

pair<int, int> move(char c) {
    if (c == 'U') return {0, 1};
    if (c == 'D') return {0, -1};
    if (c == 'L') return {-1, 0};
    if (c == 'R') return {1, 0};
    return {0, 0};
}

bool isPossible(int len, const string& s, int x, int y) {
    int n = s.size();
    vector<int> px(n + 1, 0), py(n + 1, 0);

    for (int i = 0; i < n; ++i) {
        auto [dx, dy] = move(s[i]);
        px[i + 1] = px[i] + dx;
        py[i + 1] = py[i] + dy;
    }

    for (int i = 0; i + len <= n; ++i) {
        int curX = px[i] + (px[n] - px[i + len]);
        int curY = py[i] + (py[n] - py[i + len]);

        int dx = abs(x - curX);
        int dy = abs(y - curY);
        if (dx + dy <= len && (len - dx - dy) % 2 == 0)
            return true;
    }
    return false;
}

int pathChange(string& operations, int x, int y) {
    int n = operations.size();
    if (abs(x) + abs(y) > n || (n - abs(x) - abs(y)) % 2 != 0)
        return -1;

    int low = 0, high = n, ans = -1;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (isPossible(mid, operations, x, y)) {
            ans = mid;
            high = mid - 1;
        } else
            low = mid + 1;
    }
    return ans;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    string operations;
    cin >> n >> operations >> x >> y;

    cout << pathChange(operations, x, y) << '\n';
    return 0;
}
