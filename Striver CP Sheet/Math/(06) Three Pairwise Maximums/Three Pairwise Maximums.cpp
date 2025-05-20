#include<bits/stdc++.h>
using namespace std;
 
void abcFinder(vector<int>& nums){
    sort(nums.begin(), nums.end());
    if(nums[1] != nums[2]){
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
        cout << nums[0] << " " << nums[2] << " " << nums[0] << endl;
    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        vector<int> nums(3);
        for(int& i : nums) cin >> i;
        abcFinder(nums);
    }
    return 0;
}