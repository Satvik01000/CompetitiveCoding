#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int maxPossibleTeams(long long a, long long b){
    return min({(a+b)/4, a, b});
}

int main(){
    fast;
    int t;
    cin>>t;

    while(t--){
        long long a, b;
        cin>>a>>b;
        cout<<maxPossibleTeams(max(a, b), min(a, b))<<endl;
    }
    return 0;
}
