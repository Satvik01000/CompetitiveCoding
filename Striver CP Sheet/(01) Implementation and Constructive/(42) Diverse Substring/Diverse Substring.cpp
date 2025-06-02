#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n>>s;

    for(int i=1; i<s.size(); i++){
        if(s[i]!=s[i-1]){
            cout<<"YES"<<endl<<s.substr(i-1, 2)<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}