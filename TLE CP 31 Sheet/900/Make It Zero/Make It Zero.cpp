#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void makeItZero(int n, vector<int>& nums){
    if(!(n&1)){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
        return;
    }
    cout<<4<<endl;
    cout<<1<<" "<<n-1<<endl;
    cout<<1<<" "<<n-1<<endl;
    cout<<n-1<<" "<<n<<endl;
    cout<<n-1<<" "<<n<<endl;
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
        makeItZero(n, nums);
    }
    return 0;
}