#include<bits/stdc++.h>
using namespace std;

int helper(int n){
    return (n+1)/2;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<helper(n)<<endl;
    }
    return 0;
}