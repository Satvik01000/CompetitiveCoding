#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(vector<int>& nums, int n, int k){
    for(auto& i : nums){
        if(i==k) return "YES";
    }
    return "NO";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int& i : nums) cin>>i;
        cout<<possibleOrNot(nums, n, k)<<endl;
    }
    return 0;
}
