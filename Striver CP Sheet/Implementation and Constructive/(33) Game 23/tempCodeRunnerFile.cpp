#include<bits/stdc++.h>
using namespace std;

int numberOfMoves(int n, int m){
    if(m%n!=0)
        return -1;
    m/=n;
    
    int count=0;
    while(m%2==0){
        m/=2;
        count++;
    }
    cout<<"count of 2's is "<<count<<endl;
    int temp = count;
    while(m%3==0){
        m/=3;
        count++;
    }
    cout<<"count of 3's is "<<count-temp<<endl;
    cout<<"m is "<<m<<endl;
    return m==0 ? count : -1;
}

int main(){
    int n, m;
    cin>>n>>m;
    cout<<numberOfMoves(n, m)<<endl;
    return 0;
}