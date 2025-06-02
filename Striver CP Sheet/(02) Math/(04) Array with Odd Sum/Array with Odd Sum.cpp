#include<bits/stdc++.h>
using namespace std;

string isOddSumPossible(int n, vector<int>& nums){
    int totalSum=0;
    bool allEven=true, allOdd=true;
    for(int& i : nums){
        if(i%2==0)
            allOdd=false;
        if(i%2!=0)
            allEven=false;
        totalSum+=i;
    }
    if(allEven)
        return "NO";
    else if(allOdd && totalSum%2==0)
        return "NO";
    return "YES";
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector<int> nums(n);
        for(int& i : nums)
            cin>>i;
        cout<<isOddSumPossible(n, nums)<<endl;
    }
    return 0;
}