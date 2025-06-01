#include <bits/stdc++.h>
using namespace std;

void minAfterMerge(int n) {
    cout << 2 << endl;

    int last = n;
    int before = n - 1;

    cout << last << " " << before << endl;
    int result = (last + before + 1) / 2;

    for (int i = n - 2; i >= 1; --i) {
        cout << result << " " << i << endl;
        result = (result + i + 1) / 2;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        minAfterMerge(n);
    }
    return 0;
}
