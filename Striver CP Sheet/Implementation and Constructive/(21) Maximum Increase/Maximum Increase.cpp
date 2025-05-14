#include<bits/stdc++.h>
using namespace std;

int longestSubarrayIncreaseLength(vector<int>& nums){
    int size=1, maxSize=INT_MIN;

    for(int i=1; i<nums.size(); i++){
        if(nums[i-1]<nums[i])
            size++;
        else{
            maxSize=max(maxSize, size);
            size=1;
        }
    }
    maxSize=max(maxSize, size);
    return maxSize;
}

int main(){
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int& i : nums)
        cin>>i;
    cout<<longestSubarrayIncreaseLength(nums)<<endl;
}