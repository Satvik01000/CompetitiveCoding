#include<iostream>
using namespace std;

int wrongSubtraction(int n, int k){
    while(k--){
        if(n%10!=0)
            n--;
        else
            n/=10;
    }
    return n;
}

int main(){
    int n, k;
    cin>>n>>k;
    cout<<wrongSubtraction(n, k)<<endl;
    return 0;
}