#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(vector<int>& nums, int n){
    return nums[0]==1 ? "YES" : "NO";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int& i : nums)
            cin>>i;
        cout<<possibleOrNot(nums, n)<<endl;
    }
    return 0;
}