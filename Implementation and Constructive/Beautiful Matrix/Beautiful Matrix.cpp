#include<bits/stdc++.h>
using namespace std;
int countToBeautifulMatrix(vector<vector<int> >& nums){
    int i, j;
    int count=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            if(nums[i][j]==1){
                count+=abs(2-i);
                count+=abs(2-j);
                return count;
            }
        }
    }
    return 0;
}
int main(){
    vector<vector<int> > nums(5, vector<int>(5));
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++)
            cin>>nums[i][j];
    }
    cout<<countToBeautifulMatrix(nums)<<endl;

    return 0;
}