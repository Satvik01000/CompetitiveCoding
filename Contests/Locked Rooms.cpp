#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int roomsTheyCannotVisit(vector<int>& nums, int n) {
    int leftReach = 0;   // rooms from left
    for(int i = 0; i < n; i++) {
        if(nums[i] == 1) break;
        leftReach++;
    }
    int leftMax = leftReach;

    int rightReach = 0;
    for(int i = n-1; i >= 0; i--) {
        if(nums[i] == 1) break;
        rightReach++;
    }
    int rightMin = n - rightReach;

    // rooms unreachable = between leftMax+1 and rightMin-1
    return max(0, rightMin - leftMax - 1);
}

int main() {
    fast;
    int n;
    cin >> n;
    vector<int> nums(n);
    for(auto& i : nums) cin >> i;
    cout << roomsTheyCannotVisit(nums, n) << endl;
    return 0;
}
