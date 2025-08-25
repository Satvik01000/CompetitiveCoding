#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(vector<string>& votes, const int& n, const int& m){
    map<int, int> people;
    for(int i=1; i<=n; i++) people[i]=0;
    for(int i=0; i<m; i++){
        vector<int> zeroCount, oneCount;
        for(int j=0; j<n; j++){
            votes[j][i] == '0' ? zeroCount.push_back(j) : oneCount.push_back(j);
        }
        if(oneCount.size()<zeroCount.size() && oneCount.size()!=0){
            for(auto& i : oneCount) people[i]++;
        }else if(zeroCount.size()<oneCount.size() && zeroCount.size()!=0){
            for(auto& i : zeroCount) people[i]++;
        }else{
            for(auto& i : zeroCount) people[i]++;
            for(auto& i : oneCount) people[i]++;
        }
    }
    int maxVotes=0;
    for(auto& i : people) maxVotes=max(maxVotes, i.second);
    for(auto& i : people) if(i.second==maxVotes) cout<<i.first+1<<" ";
    cout<<endl;
}

int main() {
    fast;
    int n, m;
    cin>>n>>m;
    vector<string> votes(n);
    for(auto& i : votes) cin>>i;
    helper(votes, n, m);
    return 0;
}
