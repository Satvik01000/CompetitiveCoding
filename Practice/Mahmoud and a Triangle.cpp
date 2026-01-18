#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

string possibleOrNot(vector<long long>& nums, int n){
    for(int i = 0; i < n - 2; i++)
        if(nums[i] + nums[i+1] > nums[i+2]) return "YES";
    
    return "NO";
}

int main() {
    fast;
    int n;
    cin >> n;
    vector<long long> nums(n);
    for(auto& i : nums) cin >> i;

    sort(nums.begin(), nums.end());
    cout << possibleOrNot(nums, n) << endl;
    return 0;
}
