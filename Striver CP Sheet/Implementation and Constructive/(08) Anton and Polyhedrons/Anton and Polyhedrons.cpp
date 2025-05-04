#include<bits/stdc++.h>
using namespace std;

int numberOfFaces(int n){
    int faces=0;
    for(int i=1; i<=n; i++){
        string shape="";
        cin>>shape;
        switch (shape[0]){
        case 'T':
            faces+=4;
            break;
        
        case 'C':
            faces+=6;
            break;

        case 'O':
            faces+=8;
            break;

        case 'D':
            faces+=12;
            break;

        case 'I':
            faces+=20;
            break;

        default:
            break;
        }
    }
    return faces;
}

int main(){
    int n;
    cin>>n;
    cout<<numberOfFaces(n)<<endl;
    return 0;
}