#include<bits/stdc++.h>
using namespace std;

int numberOfAnimals(int n){
    return (n+2)/4;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<numberOfAnimals(n)<<endl;
    }
    return 0;
}