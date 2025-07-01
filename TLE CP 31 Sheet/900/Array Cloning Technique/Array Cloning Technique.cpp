#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minOperations(vector<int>& nums, int n){
    unordered_map<int, int> freq;
    for(auto& i : nums) freq[i]++;
    int maxFreq=0;
    for(auto& i : freq)
        if(i.second>maxFreq) maxFreq=i.second;
    int operations=0;
    while(maxFreq<n){
        operations++;
        operations+= (n-maxFreq > maxFreq ? maxFreq : n-maxFreq);
        maxFreq+=maxFreq;
    }
    return operations;
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
