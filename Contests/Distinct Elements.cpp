#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void validA(vector<int>& nums, const int& n){
    vector<int> a(n, 0);
    if(nums[n-1]==((n*(n+1))/2)){
        for(int i = 1; i<=n; i++) cout<<((i*(i+1))/2)<<" ";
        cout<<endl;
        return;
    }
    if(nums[n-1]==n){
        for(int i = 1; i<=n; i++) cout<<1<<" ";
        cout<<endl;
        return;
    }
    

}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(auto& i : nums) cin>>i;
        validA(nums, n);
    }
    return 0;
}
