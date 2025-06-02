#include<bits/stdc++.h>
using namespace std;

int minMoves(int a, int b){
    return (a%b)==0 ? 0 : b-(a%b);
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<minMoves(a, b)<<endl;
    }
    return 0;
}