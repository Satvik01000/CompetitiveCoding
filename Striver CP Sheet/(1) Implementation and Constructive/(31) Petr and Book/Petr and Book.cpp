#include<bits/stdc++.h>
using namespace std;

int dayOfFinish(vector<int>& schedule, int n) {
    int i = 0;
    while (n > 0) {
        n -= schedule[i];
        i = (i + 1) % 7;
    }
    return (i == 0 ? 7 : i);
}

int main() {
    int n;
    cin >> n;

    vector<int> schedule(7);
    for (int& i : schedule)
        cin >> i;
    
    cout << dayOfFinish(schedule, n) << endl;
    return 0;
}