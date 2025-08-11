#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int helper(vector<int>& a, vector<int>& b, int n) {
    unordered_map<int, int> aFreqMax, bFreqMax;

    // Count max streaks in a
    int count = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1]) count++;
        else {
            aFreqMax[a[i-1]] = max(aFreqMax[a[i-1]], count);
            count = 1;
        }
    }
    aFreqMax[a[n-1]] = max(aFreqMax[a[n-1]], count);

    // Count max streaks in b
    count = 1;
    for (int i = 1; i < n; i++) {
        if (b[i] == b[i-1]) count++;
        else {
            bFreqMax[b[i-1]] = max(bFreqMax[b[i-1]], count);
            count = 1;
        }
    }
    bFreqMax[b[n-1]] = max(bFreqMax[b[n-1]], count);

    // Find max possible combined streak
    int ans = 1;
    for (auto &it : aFreqMax) {
        int val = it.first;
        int fromA = it.second;
        int fromB = bFreqMax.count(val) ? bFreqMax[val] : 0;
        ans = max(ans, fromA + fromB);
    }
    
    for (auto &it : bFreqMax)
        ans = max(ans, it.second); // In case val exists only in b
    
        return ans;
}


int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n), b(n);
        for(auto& i : a) cin>>i;
        for(auto& i : b) cin>>i;

        cout<<helper(a, b, n)<<endl;
    }
    return 0;
}
