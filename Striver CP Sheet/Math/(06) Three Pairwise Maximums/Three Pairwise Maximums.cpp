#include<bits/stdc++.h>
using namespace std;

void abcFinder(vector<int>& nums){
    if(nums[1]!=nums[2]){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    cout<<nums[0]<<" "<<nums[1]<<" "<<nums[2]<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<int> nums(3);
        for(int& i : nums)
            cin>>i;
        sort(nums.begin(), nums.end());
        abcFinder(nums);
    }
    return 0;
}