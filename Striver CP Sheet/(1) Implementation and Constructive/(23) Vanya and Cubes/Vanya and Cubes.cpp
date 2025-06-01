#include<bits/stdc++.h>
using namespace std;

int height(int n){
    int level=0, totalNeeded;
    while(n>0){
        level++;
        totalNeeded+=level;
        n-=totalNeeded;
    }
    return n<0 ? level-1 : level;
}

int main(){
    int n;
    cin>>n;
    cout<<height(n)<<endl;
    return 0;
}