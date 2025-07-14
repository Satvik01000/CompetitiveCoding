#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minPossibleOperations(int a, int b, int x, int y){
    if(a>b && (a^1)!=b) return -1;
    if(a>b && (a^1)==b) return y;
    ll cost = 0;
    while(a!=b){
        int temp1 = a+1;
        int temp2 = a^1;
        if(temp1>temp2){
            a=a+1;
            cost+=x;
        }else if(temp1<temp2){
            a=a^1;
            cost+=y;
        }else{
            a=a^1;
            cost+=min(x, y);
        }
    }
    return cost;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int a, b, x, y;
        cin>>a>>b>>x>>y;
        cout<<minPossibleOperations(a, b, x, y)<<endl;
    }
    return 0;
}
