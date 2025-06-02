#include <bits/stdc++.h>
using namespace std;

int missedTrains(string time) {
    int l = time.size();
    int ones = count(time.begin(), time.end(), '1');

    if(ones == 0)
        return 0;
    if(ones == 1)
        return l / 2;

    return (l + 1) / 2;
}

int main() {
    string time;
    cin >> time;
    cout << missedTrains(time) << endl;
    return 0;
}