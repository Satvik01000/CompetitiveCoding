#include<bits/stdc++.h>
using namespace std;

string whoWins(int a, int b, int c, int d){
    if(a>b && c>d)
        return "Gellyfish";
    if(b>a && d>c)
        return "Flower";
    
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        cout<<whoWins(a, b, c, d)<<endl;
    }
    return 0;
}