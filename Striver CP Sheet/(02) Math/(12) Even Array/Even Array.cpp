#include<bits/stdc++.h>
using namespace std;

int minSwapsForGoodArray(vector<int>& nums, int n){
    int misplacedEven=0, misplacedOdd=0;

    for(int i=0; i<n; i++){
        if(i%2==0 && nums[i]%2!=0)
            misplacedOdd++;
        else if(i%2!=0 && nums[i]%2==0)
            misplacedEven++;
    }
    return misplacedEven == misplacedOdd ? misplacedEven : -1;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(auto& i : nums)
            cin>>i;
        cout<<minSwapsForGoodArray(nums, n)<<endl;
    }
    return 0;
}