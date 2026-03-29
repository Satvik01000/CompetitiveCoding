#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void solve(vector<int>& nums, int n, int x) {
    map<int, int> mpp;
    for(int i = 0; i<n; i++) {
        if(mpp.count(x-nums[i])) {
            cout<<i+1<<" "<<(mpp[x-nums[i]])+1<<endl;
            return;
        }
        mpp[nums[i]]=i;
    }
    cout<<"IMPOSSIBLE"<<endl;
}

int main() {
    fast;
    int n, x;
    cin>>n>>x;
    vector<int> nums(n);
    for(auto& i : nums) cin>>i;
    solve(nums, n, x);
    return 0;
}
