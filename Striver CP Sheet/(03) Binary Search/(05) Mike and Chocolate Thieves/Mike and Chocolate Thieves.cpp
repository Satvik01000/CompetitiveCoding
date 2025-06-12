# include <bits/stdc++.h>
using namespace std;
# define ll long long

ll get(ll n){
    ll ans = 0;
    for (ll i = 2; i * i * i <= n;++i)
        ans += n / (1LL*i * i * i);
    return ans;
}

int main(){
    ll m,n=-1;
    cin>>m;
    
    ll low=0,high=5e15;
    while (low<high){
        ll mid = (low+high)/2;
        if (get(mid)<m) 
            low=mid+1;
        else
            high=mid;
    }
    
    if (get(low)==m) n=low;

    cout << n << '\n';
    return 0;
}