#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll possibleNum(vector<ll>& nums, const int& n){
    vector<ll> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
    for(auto& i : primes)
        for(auto& j : nums) if(j%i != 0) return i;
    return -1;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll> nums(n);
        for(auto& i : nums) cin>>i;
        cout<<possibleNum(nums, n)<<endl;
    }
    return 0;
}
