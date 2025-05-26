#include<bits/stdc++.h>
using namespace std;

int maxNumberOfArrays(int n, vector<int>& nums){
    int arrayCount=1;
    for(int i=0; i<n-1; i++){
        if(nums[i]+1<nums[i+1])
            arrayCount++;
        else{
            nums[i+1]=nums[i];
        }
    }
    return arrayCount;
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
        
        cout<<maxNumberOfArrays(n, nums)<<endl;
    }
}