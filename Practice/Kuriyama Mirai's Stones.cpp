#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int n, m;
    cin>>n;
    vector<int> nums(n);
    vector<ll> prefix1(n, 0LL), prefix2(n, 0LL);
    cin>>nums[0];
    prefix1[0]=nums[0];
    for(int i=1; i<n; i++){
        cin>>nums[i];
        prefix1[i]=prefix1[i-1]+nums[i];
    }
    sort(nums.begin(), nums.end());
    prefix2[0]=nums[0];
    for(int i=1; i<n; i++)
        prefix2[i]=prefix2[i-1]+nums[i];
    
    cin>>m;
    while(m--){
        int type, l, r;
        cin>>type>>l>>r;
        l--;r--;
        if(type==1)
            cout<<(prefix1[r] - (l>0 ? prefix1[l-1] : 0))<<endl;
        else
            cout<<(prefix2[r] - (l>0 ? prefix2[l-1] : 0))<<endl;
    }

    return 0;
}
