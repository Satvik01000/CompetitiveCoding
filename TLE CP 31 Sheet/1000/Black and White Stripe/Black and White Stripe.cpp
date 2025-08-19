#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int minOperations(string& s, int n, int k) {
    unordered_map<char, int> colorFreq;
    int low=0, high=0;
    while(high<k){
        colorFreq[s[high]]++;
        high++;
    }
    int ans=INT_MAX;

    while(high<n){
        if(colorFreq['B'] + colorFreq['W']>=k) 
            ans=min(ans, k-colorFreq['B']);
        if(ans<0) return 0;
        colorFreq[s[high]]++;
        colorFreq[s[low]]--;
        high++; low++;
    }
    ans=min(ans, k-colorFreq['B']);
    if(ans<0) return 0;
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        cout << minOperations(s, n, k) << "\n";
    }
    return 0;
}
