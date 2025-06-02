#include<bits/stdc++.h>
using namespace std;

string decrypt(string t){
    string ans="";
    int count=1;
    for(int i=0; i<t.size(); i+=count, count++)
        ans+=t[i];
    return ans;
}

int main(){
    int n;
    string t;
    cin>>n>>t;

    cout<<decrypt(t)<<endl;
    return 0;
}