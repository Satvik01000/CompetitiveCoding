#include<bits/stdc++.h>
using namespace std;

void roundNumber(string n){
    int count=n.size()-1;
    vector<int> temp;
    for(int i=0; i<n.size(); i++){
        if(n[i]=='0'){
            count--;
            continue;
        }
        temp.push_back(static_cast<int>(n[i]-'0')*pow(10, count--));
    }
    cout<<temp.size()<<endl;
    for(auto& i : temp)
        cout<<i<<" ";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        string n;
        cin>>n;
        roundNumber(n);
        cout<<endl;
    }
}