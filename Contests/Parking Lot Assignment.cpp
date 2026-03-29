#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    
    int n, m;
    cin >> n >> m;
    
    if (m > n) {
        cout << "No";
        return 0;
    }
    
    vector<pair<int,int>> intervals(m);
    for (int i = 0; i < m; i++) {
        cin >> intervals[i].first >> intervals[i].second;
    }
    
    sort(intervals.begin(), intervals.end());
    
    priority_queue<int, vector<int>, greater<int>> pq;
    
    int i = 0;
    int assigned = 0;
    
    for (int x = 1; x <= n; x++) {
        
        while (i < m && intervals[i].first <= x) {
            pq.push(intervals[i].second);
            i++;
        }
        
        if (!pq.empty() && pq.top() < x) {
            cout << "No";
            return 0;
        }
        
        if (!pq.empty()) {
            pq.pop();
            assigned++;
            
            if (assigned == m) {
                cout << "Yes";
                return 0;
            }
        }
    }
    
    cout << "No";
    
    return 0;
}
