#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void cyclicSort(vector<int>& nums, const int& n) {
    int i = 0;
    while (i < n) {
        int correct = nums[i] - 1;
        if (nums[i] != nums[correct]) swap(nums[i], nums[correct]);
        else i++;
    }
}

int main() {
    fast;
    int n;
    cin>>n;
    vector<int> nums(n, 0);
    for(auto& i : nums) cin>>i;
    cyclicSort(nums, n);

    for(int i = 0; i<n; i++) if(nums[i]!=i+1){
        cout<<i+1<<endl;
        break;
    }
    return 0;
}