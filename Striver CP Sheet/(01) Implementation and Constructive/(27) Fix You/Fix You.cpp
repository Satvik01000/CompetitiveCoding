#include<bits/stdc++.h>
using namespace std;

int minFixes(vector<vector<char>>& conveyerBelt, int n, int m){
    int count=0;
    for(int i=0; i<n; i++){
        if(conveyerBelt[i][m-1]=='R')
            count++;
    }
    for(int i=0; i<m; i++){
        if(conveyerBelt[n-1][i]=='D')
            count++;
    }
    return count;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n, m;
        cin>>n>>m;

        vector<vector<char>> conveyerBelt(n, vector<char>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cin>>conveyerBelt[i][j];
        }
        cout<<minFixes(conveyerBelt, n, m)<<endl;
    }
    return 0;
}