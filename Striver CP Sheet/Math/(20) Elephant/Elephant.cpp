#include<bits/stdc++.h>
using namespace std;

int minMoves(int x){
    return (x/5) + (x%5!=0);
}

int main(){
    int x;
    cin>>x;

    cout<<minMoves(x)<<endl;
    return 0;
}