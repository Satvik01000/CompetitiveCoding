#include<bits/stdc++.h>
using namespace std;

bool canTake(int val, vector<int>& sushiTypes, const int& n){
    int twoCount=0, oneCount=0;
    int i=0;
    while(i<n){
        if(oneCount+twoCount>=val)
            return true;
        if(sushiTypes[i]!=1){
            while(sushiTypes[i]!=1) {
                twoCount++;
                i++;
            }
            if(oneCount+twoCount>=val) return true;
            oneCount=0;
        }else{
            while(sushiTypes[i]!=1) {
                oneCount++;
                i++;
            }
            if(oneCount+twoCount>=val) return true;
            twoCount=0;
        }
    }
    return false;
}

int maxPossible(vector<int>& sushiTypes, const int& n){
    int low=2, high=n, ans=2;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(mid%2!=0) mid--;
        if(canTake(mid, sushiTypes, n)){
            ans=mid;
            low=mid+1;
        }else
            high=mid-1;
    }
    return ans;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin>>n;
    vector<int> sushiTypes(n);
    for(auto& i : sushiTypes)
        cin>>i;
    cout<<maxPossible(sushiTypes, n)<<endl;
    return 0;
}