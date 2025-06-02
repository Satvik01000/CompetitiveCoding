#include<bits/stdc++.h>
using namespace std;

int arrange(vector<int>& heights){
    int ans=0, minIndex=0, maxIndex=0;
    int minElem=INT_MAX, maxElem=INT_MIN;

    for(int i=0; i<heights.size(); i++){
        if(heights[i]>maxElem){
            maxElem=heights[i];
            maxIndex=i;
        }
        if(heights[i]<=minElem){
            minElem=heights[i];
            minIndex=i;
        }
    }
    ans+=((heights.size()-1) - minIndex) + maxIndex;
    if(maxIndex>minIndex)
        ans--;
    return ans;
}

int main(){
    int n;
    cin>>n;

    vector<int> heights(n);
    for(int i=0; i<n; i++)
        cin>>heights[i];
    cout<<arrange(heights)<<endl;
}