#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool cmp(pair<ll, ll> a, pair<ll, ll> b){
    return a.first>b.first;
}

ll maxPossible(vector<ll>& nums, ll n, ll k){
    vector<pair<ll, ll>> setBits(n);
    for(ll i=0; i<nums.size(); i++)
        setBits[i]={__builtin_popcount(nums[i]), nums[i]};
    sort(setBits.begin(), setBits.end(), cmp);

    ll sum=0;
    if(k!=0){
        for(ll i=0; i<n && k>0; i++){
            ll temp = __builtin_popcount(setBits[i].second+1);
            if(temp > setBits[i].first){
                setBits[i].first=temp;
                k--;
            }
            sum+=setBits[i].first;
        }
    }else{
        for(auto& i : setBits)
            sum+=i.first;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        ll n, k;
        cin>>n>>k;

        vector<ll> nums(n);
        for(ll& i : nums)
            cin>>i;
        cout<<maxPossible(nums, n, k)<<endl;
    }
    return 0;
}