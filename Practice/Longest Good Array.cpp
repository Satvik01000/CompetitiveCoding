#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int maxPossibleGoodLength(int l, int r){
    int length=0;
    int curr=l, incre=1;
    while(curr<=r){
        curr+=incre;
        incre++;
        length++;
    }
    return length;
}

int main(){
    fast;
    int t;
    cin>>t;

    while(t--){
        int l, r;
        cin>>l>>r;
        cout<<maxPossibleGoodLength(l, r)<<endl;
    }
    return 0;
}
