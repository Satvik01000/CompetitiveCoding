#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums(4);
    for(int& i : nums)
        cin>>i;
    sort(nums.begin(), nums.end());

    int a=nums[3]-nums[2];
    int b = nums[0]-a, c=nums[1]-a;
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}