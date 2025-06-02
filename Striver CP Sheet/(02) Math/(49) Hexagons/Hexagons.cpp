#include<bits/stdc++.h>
using namespace std;

long long affectedHexagons(long long n){
    return ((n*(2*6 + (n-1)*6))/2) + 1;
}

int main(){
    long long n;
    cin>>n;
    cout<<affectedHexagons(n)<<endl;
}