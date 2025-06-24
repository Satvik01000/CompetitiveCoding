#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minPossibleOperations(vector<int>& nums, int n){
    if(n==2 && abs(nums[0]-nums[1])<=1)
        return 0;
    else if(n==2 && abs(nums[0]-nums[1])>1)
        return -1;
    for(int i=0; i<n-1; i++)
        if(abs(nums[i]-nums[i+1])<=1) return 0;
    for(int i=1; i<n-1; i++){
        int elemMin = min(nums[i], nums[i+1]), elemMax = max(nums[i], nums[i+1]);
        if(abs(elemMin-nums[i-1])<=1 || abs(elemMin-nums[i+2])<=1) return 1;
        if(abs(elemMax-nums[i-1])<=1 || abs(elemMax-nums[i+2])<=1) return 1;
        if((nums[i-1]>elemMin && nums[i-1]<elemMax) || (nums[i+1]>elemMin && nums[i+1]<elemMax)) return 1;
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
        for(int& i : nums)
            cin>>i;
        cout<<minPossibleOperations(nums, n)<<endl;
    }
    return 0;
}
