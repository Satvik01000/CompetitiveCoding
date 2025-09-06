#include<bits/stdc++.h>
using namespace std;

bool isPossible(int p, int n, int k){
    int time=0;
    for(int i=1; i<=p; i++)
        time+=5*i;
    time+=k;
    return time<=240;
}

int numberOfProblemsThatCanBeSolved(int n, int k){
    int low=1, high=n, ans=0;

    while(low<=high){
        int mid=low + (high-low)/2;
        if(isPossible(mid, n, k)){
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
    int n, k;
    cin>>n>>k;
    cout<<numberOfProblemsThatCanBeSolved(n, k)<<endl;
    return 0;
}