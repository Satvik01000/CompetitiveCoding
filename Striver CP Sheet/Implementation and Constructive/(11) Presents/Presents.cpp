#include<bits/stdc++.h>
using namespace std;

void presentRecievedFrom(vector<int>& presentGivenTo){
    unordered_map<int, int> elem;
    for(int i=0; i<presentGivenTo.size(); i++)
        elem[presentGivenTo[i]]=i;
    for(int i=1; i<=presentGivenTo.size(); i++)
        cout<<elem[i]+1<<" ";
}

int main(){
    int n;
    cin>>n;
    vector<int> presentGivenTo(n);
    for(int i=0; i<n; i++)
        cin>>presentGivenTo[i];
    presentRecievedFrom(presentGivenTo);
    cout<<endl;
    return 0;
}