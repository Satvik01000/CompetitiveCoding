#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(vector<int>& nums, int n, int j, int k){
    int power = nums[j];
    int weaker=0, stronger=0;
    for(int i=0; i<n; i++){
        if(i==j) continue;
        if(nums[i]<=power) weaker++;
        else stronger++;
    }
    n-=weaker;
    int strongMatches = (stronger - 1)>=0 ? stronger-1 : 0;
    n-=strongMatches;
    return n<=k ? "YES" : "NO";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin>>n>>j>>k;
        vector<int> nums(n);
        for(auto& i : nums) cin>>i;
        cout<<possibleOrNot(nums, n, j-1, k)<<endl;
    }
    return 0;
}
