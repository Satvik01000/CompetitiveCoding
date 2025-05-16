#include<bits/stdc++.h>
using namespace std;

void printLine(int n, int i) {
    // Print leading spaces
    for (int w = 0; w < (n - i) * 2; w++)
        cout << " ";

    // Print increasing numbers
    for (int j = 0; j <= i; j++) {
        if (j != 0) cout << " ";
        cout << j;
    }

    // Print decreasing numbers
    for (int j = i - 1; j >= 0; j--) {
        cout << " " << j;
    }

    cout << endl;
}

int main() {
    int n;
    cin >> n;

    // Upper half including middle line
    for (int i = 0; i <= n; i++)
        printLine(n, i);

    // Lower half
    for (int i = n - 1; i >= 0; i--)
        printLine(n, i);

    return 0;
}
