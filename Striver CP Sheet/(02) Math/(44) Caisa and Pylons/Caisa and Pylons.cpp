#include <bits/stdc++.h>
using namespace std;
 
int minPossibleDollars(vector<int>& heights) {
    int energy = 0, dollars = 0;
    
    int currentHeight = 0;
    for (int i = 0; i < heights.size(); i++) {
        energy += currentHeight - heights[i];

        if (energy < 0) {
            dollars += -energy;
            energy = 0;
        }

        currentHeight = heights[i];
    }
    
    return dollars;
}
 
int main() {
    int n;
    cin >> n;
    vector<int> pylons(n);
    for (int i = 0; i < n; ++i)
        cin >> pylons[i];
 
    cout << minPossibleDollars(pylons) << endl;
    return 0;
}
