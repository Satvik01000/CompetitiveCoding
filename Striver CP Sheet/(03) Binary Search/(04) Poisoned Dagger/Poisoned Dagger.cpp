#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool canSlay(ll x, vector<int>& attackTimes, int n, ll h){
    ll hp=0LL;
    for(int i=0; i<attackTimes.size()-1; i++)
        hp+=min(x, 1LL*abs(attackTimes[i]-attackTimes[i+1]));
    hp += x; // Include full poison duration for the last attack
    return hp>=h;
}

ll minTimePoisonLasts(vector<int>& attackTimes, int n, ll h){
    ll low=1, high=h, ans=-1;
    while(low<=high){
        ll mid = low + (high - low)/2;
        if(canSlay(mid, attackTimes, n, h)){
            ans=mid;
            high=mid-1;
        }else
            low=mid+1;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        ll h;
        cin>>n>>h;
        vector<int> attackTimes(n);
        for(int& i : attackTimes)
            cin>>i;
        cout<<minTimePoisonLasts(attackTimes, n, h)<<endl;
    }
    return 0;
}