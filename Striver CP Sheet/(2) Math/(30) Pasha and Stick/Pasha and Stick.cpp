#include<bits/stdc++.h>
using namespace std;

int numberOfWays(int n){
    if(n%2!=0 || n<6)
        return 0;
    return ((n/2)%2==0) ? (n/4)-1 : n/4;
}

int main(){
    int n;
    cin>>n;
    cout<<numberOfWays(n)<<endl;
}