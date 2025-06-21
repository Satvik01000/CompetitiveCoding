#include<bits/stdc++.h>
using namespace std;
int amountNeeded(int n){
    int totalJamNeeded = n * 3;
    int berriesNeeded = ((totalJamNeeded*4)/3)/2;

    return berriesNeeded;
}
int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        cout<<amountNeeded(n)<<endl;
    }
    return 0;
}