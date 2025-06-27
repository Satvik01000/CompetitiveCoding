#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int possibleK(vector<int>& nums, int n){
    int twoCount=0;
    for(int& i : nums) if(i==2) twoCount++;
    if(twoCount==0) return 1;
    if(twoCount%2!=0) return -1;
    int prefixTwoCount=0, suffixTwoCount=twoCount;
    for(int i=0; i<n; i++){
        if(prefixTwoCount==suffixTwoCount) return i;
        if(nums[i]==2){
            prefixTwoCount++;
            suffixTwoCount--;
        }
    }
    return -1;
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
        cout<<possibleK(nums, n)<<endl;
    }
    return 0;
}
