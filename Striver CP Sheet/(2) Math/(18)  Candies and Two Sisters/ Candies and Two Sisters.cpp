#include<bits/stdc++.h>
using namespace std;

int numberOfWays(int n){
    return n%2!=0 ? n/2 : (n/2)-1;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<numberOfWays(n)<<endl;
    }
    return 0;
}