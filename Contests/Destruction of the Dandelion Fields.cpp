#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll maxPossible(vector<ll>& nums){
    vector<ll> odds;
    ll evenSum = 0;

    for(auto& i : nums){
        if(!(i & 1)) evenSum += i;
        else odds.push_back(i);
    }

    sort(odds.rbegin(), odds.rend());

    ll oddSum = 0;
    for(int i = 0; i < (int)(odds.size() + 1) / 2; i++)oddSum += odds[i];

    return evenSum + oddSum;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll> nums(n); 
        bool has_odd = false;
        for(auto& i : nums) {
            cin>>i;
            if(i & 1) has_odd=true;
        }
        
        if(!has_odd) cout << 0 << endl;
        else cout << maxPossible(nums) << endl;
    }
    return 0;
}