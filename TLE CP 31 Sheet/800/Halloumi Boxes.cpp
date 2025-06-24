#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(vector<int>& nums, int n, int k){
    if(k==1){
        vector<int> temp=nums;
        sort(temp.begin(), temp.end());
        return temp == nums ? "YES" : "NO";
    }
    return k>1 ? "YES" : "NO";
}

int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int& i : nums)
            cin>>i;
        cout<<possibleOrNot(nums, n, k)<<endl;
    }
    return 0;
}
