#include<bits/stdc++.h>
using namespace std;

int minMoves(int x){
    vector<int> crystals(3, 0);
    int i=0;
    int minElem=0, maxElem=0;
    while(true){
        if(crystals[i%3]>=x && crystals[(i+1)%3]>=x && crystals[(i+2)%3]>=x)
            return i;
        minElem=min(crystals[(i+1)%3], crystals[(i+2)%3]);
        crystals[i%3]=2*minElem+1;
        i++;
    }
    return -1;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int x;
        cin>>x;
        cout<<minMoves(x)<<endl;
    }
}