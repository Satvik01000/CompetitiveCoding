#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll minMoves(vector<ll>& nums, const int& n){
    ll moves = 0;
    for(int i = 1; i<n; i++) {
        if(nums[i]<nums[i-1]) {
            moves+=(nums[i-1]-nums[i]); 
            nums[i]=nums[i-1];
        }
    }
    return moves;
}

int main() {
    fast;
    int n;
    cin>>n;
    vector<ll> nums(n);
    for(auto& i : nums) cin>>i;
    cout<<minMoves(nums, n)<<endl;
    return 0;
}
