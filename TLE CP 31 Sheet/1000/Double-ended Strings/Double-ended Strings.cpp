#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int helper(int ind1, int ind2, const string& a, const string& b, vector<vector<int>>& dp, int& maxLen) {
    if(ind1 < 0 || ind2 < 0) return 0;
    if(dp[ind1][ind2] != -1) return dp[ind1][ind2];

    if(a[ind1] == b[ind2]) {
        dp[ind1][ind2] = 1 + helper(ind1 - 1, ind2 - 1, a, b, dp, maxLen);
        maxLen = max(maxLen, dp[ind1][ind2]);
    }else
        dp[ind1][ind2] = 0;

    helper(ind1 - 1, ind2, a, b, dp, maxLen);
    helper(ind1, ind2 - 1, a, b, dp, maxLen);

    return dp[ind1][ind2];
}

int minOperations(string& a, string& b){
    int n=a.size(), m=b.size();
    vector<vector<int>> dp(n, vector<int>(m, -1));
    int maxLen = 0;
    helper(n - 1, m - 1, a, b, dp, maxLen);
    return (n-maxLen) + (m-maxLen);
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin>>a>>b;
        cout<<minOperations(a, b)<<endl;
    }
    return 0;
}
