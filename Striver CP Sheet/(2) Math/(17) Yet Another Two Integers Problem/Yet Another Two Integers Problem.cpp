#include<bits/stdc++.h>
using namespace std;
int minMoves(int a, int b){
    return abs(a - b) / 10 + (abs(a - b) % 10 != 0);
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