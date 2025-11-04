#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(int n){
    if(n==4){
        cout<<"2 4 1 3"<<endl;
        return;
    }
    if(n==2 || n==3){
        cout<<"NO SOLUTION"<<endl;
        return;
    }
    int temp=n;
    while(true){
        if(temp<=0) break;
        cout<<temp<<" ";
        temp-=2;
    }
    
    temp=n-1;
    while(true){
        if(temp<=0) break;
        cout<<temp<<" ";
        temp-=2;
    }
}

int main() {
    fast;
    int n;
    cin>>n;
    if(n==1) cout<<1<<endl;
    else helper(n);
    return 0;
}
