#include<bits/stdc++.h>
using namespace std;

void printDots(int m){
    for(int i=0; i<m-1; i++)
        cout<<'.';
}

void printHash(int m){
    for(int i=0; i<m; i++)
        cout<<'#';
}

void snakePattern(int n, int m){
    bool flag=true;
    while(n!=0){
        if(n%2==0){
            if(flag){
                printDots(m);
                cout<<'#';
                cout<<endl;
                flag=false;
            }else{
                cout<<'#';
                printDots(m);
                cout<<endl;
                flag=true;
            }
        }else{
            printHash(m);
            cout<<endl;
        }
        n--;
    }
}

int main(){
    int n, m;
    cin>>n>>m;
    snakePattern(n, m);
    return 0;
}