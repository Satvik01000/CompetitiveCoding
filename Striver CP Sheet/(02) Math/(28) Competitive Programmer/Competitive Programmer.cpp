#include <bits/stdc++.h>
using namespace std;

void possibleOrNot(string& num) {
    int zero_count = 0, even_count = 0, sum = 0;
    for (char c : num) {
        int d = c - '0';
        if (d == 0) zero_count++;
        if (d % 2 == 0) even_count++;
        sum += d;
    }

    if (zero_count >= 1 && even_count >= 2 && sum % 3 == 0)
        cout << "red\n";
    else
        cout << "cyan\n";
}

int main() {
    int n;
    cin >> n;
    while (n--) {
        string num;
        cin >> num;
        possibleOrNot(num);
    }
    return 0;
}
