#include<iostream>
using namespace std;

int minShovels(int k, int r){
    int shovelCount=1, price=k;
    while(price%10!=r && price%10!=0){
        shovelCount++;
        price+=k;
    }
    return shovelCount;
}

int main(){
    int k, r;
    cin>>k>>r;
    
    cout<<minShovels(k, r)<<endl;
    return 0;
}