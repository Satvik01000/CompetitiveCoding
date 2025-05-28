#include <bits/stdc++.h>
using namespace std;

string possibleOrNot(int a, int b, int s) {
    int minSteps = abs(a) + abs(b);
    if (minSteps > s)
        return "No";
    return ((s - minSteps) % 2 == 0) ? "Yes" : "No";
}

int main() {
    int a, b, s;
    cin >> a >> b >> s;

    cout << possibleOrNot(a, b, s) << endl;
}