#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int maxPossible(string& s, int n){
    vector<int> prefix(n), suffix(n);
    unordered_set<char> elems;

    for(int i=0; i<n; i++){
        elems.insert(s[i]);
        prefix[i] = elems.size();
    }
    
    elems.clear();
    for(int i=n-1; i>=0; i--){
        elems.insert(s[i]);
        suffix[i] = elems.size();
    }

    int ans = INT_MIN;
    for(int i=0; i < n-1; i++) 
        ans = max(ans, prefix[i] + suffix[i+1]);
    
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << maxPossible(s, n) << "\n";
    }
    return 0;
}
