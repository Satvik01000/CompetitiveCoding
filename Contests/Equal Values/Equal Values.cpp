#include<bits/stdc++.h>
using namespace std;

int costForEqualValue(vector<int>& nums, int n){
    int ans=INT_MAX;
    for(int i=0; i<n;){
        int j=i;
        while(j<n && nums[i]==nums[j+1])
            j++;
        ans = min(ans, (i-1)*nums[i] + (n-j)*nums[j]);
    }
    return ans;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int& i : nums)
            cin>>i;
        cout<<costForEqualValue(nums, n)<<endl;
    }
    return 0;
}