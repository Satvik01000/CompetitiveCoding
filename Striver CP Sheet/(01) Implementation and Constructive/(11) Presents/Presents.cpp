#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> result(n);
    for (int giver = 1; giver <= n; ++giver) {
        int receiver;
        cin >> receiver;
        result[receiver - 1] = giver;
    }
    for (int x : result) cout << x << " ";
    cout << "\n";
    return 0;
}

/*
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
*/