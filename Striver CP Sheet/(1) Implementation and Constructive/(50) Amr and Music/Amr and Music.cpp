#include <bits/stdc++.h>
using namespace std;

void orderOfLearning(int k, vector<pair<int, int>>& timeWithIndex) {
    vector<int> chosenIndices;
    for (auto& [days, index] : timeWithIndex) {
        if (days > k)
            break;
        k -= days;
        chosenIndices.push_back(index);
    }

    cout << chosenIndices.size() << endl;
    for (int i : chosenIndices)
        cout << i << " ";
    cout << endl;
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<pair<int, int>> timeWithIndex(n);
    for (int i = 0; i < n; i++) {
        cin >> timeWithIndex[i].first;
        timeWithIndex[i].second = i + 1;
    }

    sort(timeWithIndex.begin(), timeWithIndex.end());
    orderOfLearning(k, timeWithIndex);

    return 0;
}
