#include<bits/stdc++.h>
using namespace std;

pair<int , int> solve(int l, int r){
    if (2 * l <= r)
        return {l, 2*l};
    else
        return {-1, -1};
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int l, r;
        cin>>l>>r;
        auto[x, y] = solve(min(l, r), max(l, r));
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}