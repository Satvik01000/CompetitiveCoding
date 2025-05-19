#include<bits/stdc++.h>
using namespace std;

string stopOrNot(vector<int>& scores, int n){
    if(n > 2 && scores[1]==0 && scores[0]==0)
        return "YES";
    else if(n==2 && scores[1]==scores[0])
        return "YES";
    for(int i=2; i<n-1; i++){
        if(scores[i]==0 && (scores[i-1]==0 || scores[i+1]==0))
            return "YES";
    }
    return "NO";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> scores(n);

        for(auto& i : scores)
            cin>>i;
        cout<<stopOrNot(scores, n)<<endl;
    }
    return 0;
}