#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

struct cmp {
    bool operator()(pair<ll, int> a, pair<ll, int> b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second > b.second;
    }
};

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        ll k;
        cin >> n >> k;
        vector<ll> nums(n);
        priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
        for (int i = 0; i<n; i++){
            cin>>nums[i];
            nums[i]%=k;
            if(nums[i]==0) cout<<i+1<<" ";
            else pq.push({nums[i], i+1});
        }
        while(!pq.empty()){
            cout<<pq.top().second<<" ";
            pq.pop();
        }
        cout<<endl;
    }
    return 0;
}