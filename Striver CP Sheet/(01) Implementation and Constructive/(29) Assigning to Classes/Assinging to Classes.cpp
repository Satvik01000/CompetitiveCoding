#include<bits/stdc++.h>
using namespace std;

int skillLevelDifference(vector<int>& skillLevels){
    int n=skillLevels.size()/2;
    sort(skillLevels.begin(), skillLevels.end());
    return skillLevels[n]-skillLevels[n-1];
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int> skillLevels(2*n);
        for(int i=0; i<2*n; i++)
            cin>>skillLevels[i];
        cout<<skillLevelDifference(skillLevels)<<endl;
    }
}