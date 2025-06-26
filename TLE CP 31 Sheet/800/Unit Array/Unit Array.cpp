#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperations(vector<int>& nums, int n){
    int sum=0, negativeCount=0;
    for(int& i : nums){
        if(i<0) negativeCount++;
        sum+=i;
    }
    int operations=0;
    while(negativeCount>=0){
        if(sum>=0 && negativeCount%2==0) return operations;
        negativeCount--;
        sum+=2;
        operations++;
    }
    return -1;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> nums(n);
        for(auto& i : nums) cin>>i;
        cout<<minOperations(nums, n)<<endl;
    }
    return 0;
}
