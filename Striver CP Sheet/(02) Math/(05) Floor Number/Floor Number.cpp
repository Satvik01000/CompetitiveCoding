#include<bits/stdc++.h>
using namespace std;

int apartmentFloor(int n, int x){
    if(n==1 || n==2)
        return 1;
    int floorNumber=2, maxApartmentNumber=2+x;
    while(true){
        if(n<=maxApartmentNumber)
            return floorNumber;
        
        maxApartmentNumber+=x;
        floorNumber++;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, x;
        cin>>n>>x;

        cout<<apartmentFloor(n, x)<<endl;
    }
    return 0;
}