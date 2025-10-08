#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperations(vector<int>& nums, const int& n){
    int zeroCount = 0, negativeOneCount=0;
    for(int& i : nums){
        if(i==-1) negativeOneCount++;
        else if(i==0) zeroCount++;
    }
    int ans = zeroCount;
    if(negativeOneCount&1) ans+=2;
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(auto& i : nums) cin>>i;
        cout<<minOperations(nums, n)<<endl;
    }
    return 0;
}
