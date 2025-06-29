#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minRemoval(vector<int>& ratings, int n, int k){
    sort(ratings.begin(), ratings.end());
    int count=1, ans=1;
    for(int i=1; i<n; i++){
        if(ratings[i]-ratings[i-1]<=k) count++;
        else count = 1;
        ans = max(ans, count);
    }
    return n-ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> ratings(n);
        for(auto& i : ratings) cin>>i;
        cout<<minRemoval(ratings, n, k)<<endl;
    }
    return 0;
}
