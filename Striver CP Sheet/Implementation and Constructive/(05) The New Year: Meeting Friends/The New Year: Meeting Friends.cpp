#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[3];
    for(int i=0; i<3; i++)
        cin>>arr[i];

    int minDist=INT_MAX;

    for(int i=0; i<3; i++){
        int dist=0;
        for(int j=0; j<3; j++){
            if(i==j)
                continue;
            dist+=abs(arr[i]-arr[j]);
        }
        minDist = min(dist, minDist);
    }
    cout<<minDist<<endl;
    return 0;
}