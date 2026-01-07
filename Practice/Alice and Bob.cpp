#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int bobNumber(int a, vector<int>& nums, int n){
    int lessCount = 0, moreCount = 0;

    for(int i : nums) if(abs(i - (a-1)) < abs(i - a)) lessCount++;
    for(int i : nums) if(abs(i - (a+1)) < abs(i - a)) moreCount++;

    return lessCount > moreCount ? (a-1) : (a+1);
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, a;
        cin>>n>>a;
        vector<int> nums(n);
        for(auto& i : nums) cin>>i;
        cout<<bobNumber(a, nums, n)<<endl;
    }
    return 0;
}
