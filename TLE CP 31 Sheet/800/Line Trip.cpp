#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

bool isPossible(int cap, vector<int>& gasStations, int n, int x){
    int prev=0;
    for(int i=0; i<n; i++){
        int curr=gasStations[i];
        if(cap<(curr-prev)) return false;
        prev=curr;
    }
    if(cap<2*(x-prev)) return false;
    return true;
}

int minPossibleGasFill(vector<int>& gasStations, int n, int x){
    int low=1, high=2*x, ans=high;

    while(low<=high){
        int mid=low + (high-low)/2;
        if(isPossible(mid, gasStations, n, x)){
            ans=mid;
            high=mid-1;
        }else
            low=mid+1;
    }
    return ans;
}

int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
        int n, x;
        cin>>n>>x;
        vector<int> gasStations(n);
        for(int& i : gasStations) cin>>i;
        cout<<minPossibleGasFill(gasStations, n, x)<<endl;
    }
    return 0;
}