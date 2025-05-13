#include<bits/stdc++.h>
using namespace std;
int minCapacityOfTram(int n){
    int outbound=0, inbound=0;
    cin>>outbound>>inbound;
    int totalPassengers=inbound, ans=inbound;

    for(int i=0; i<n-1; i++){
        cin>>outbound>>inbound;
        totalPassengers+=(inbound-outbound);
        ans=max(ans, totalPassengers);
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<minCapacityOfTram(n)<<endl;

    return 0;
}