#include<bits/stdc++.h>
using namespace std;

int zeroErase(string s){
    int zreoCount=0, ans=0, i;

    for(i=0; i<s.size(); i++)
        if(s[i]=='1') break;
    for(;i<s.size(); i++){
        if(s[i]=='1'){
            ans+=zreoCount;
            zreoCount=0;
            continue;
        }
        zreoCount++;
    }
    return ans;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;
        cout<<zeroErase(n)<<endl;
    }
    return 0;
}
