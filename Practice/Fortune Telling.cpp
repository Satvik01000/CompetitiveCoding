#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string whoCanGetY(vector<int>& nums, int x, int y, const int& n){
    ll aliceNum=x, bobNum = x+3;
    for(auto& i : nums){ 
        aliceNum^=i;
        bobNum^=i;
    }
    bool isEvenY = !(y&1);
    bool isEvenAliceNum = !(aliceNum&1);
    bool isEvenBobNum = !(bobNum&1);
    if(isEvenY == isEvenAliceNum) return "Alice";
    return "Bob";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin>>n>>x>>y;
        vector<int> nums(n);
        for(auto& i : nums) cin>>i;
        cout<<whoCanGetY(nums, x, y, n)<<endl;
    }
    return 0;
}
