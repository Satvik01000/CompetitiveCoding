#include<bits/stdc++.h>
using namespace std;

string possibleOrNot(vector<int>& nums, int n){
    int temp1=nums[2]-nums[0], temp2=nums[2]-nums[1];
    nums[0]+=temp1;
    n-=temp1;
    nums[1]+=temp2;
    n-=temp2;

    if(n>=0 && n%3==0)
        return "YES";
    return "NO";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        vector<int> nums(3);
        int n;
        for(int& i : nums)
            cin>>i;
        cin>>n;
        sort(nums.begin(), nums.end());
        cout<<possibleOrNot(nums, n)<<endl;
    }
    return 0;
}