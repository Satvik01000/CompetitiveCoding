#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int opinion;
    for(int i=0; i<n; i++){
        cin>>opinion;
        if(opinion == 1){
            cout<<"HARD"<<endl;
            return 0;
        }
    }
    cout<<"EASY"<<endl;
    return 0;
}