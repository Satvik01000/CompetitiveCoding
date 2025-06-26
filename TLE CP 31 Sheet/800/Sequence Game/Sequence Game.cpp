#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void possibleSequence(vector<int>& nums, int n){
    unordered_set<int> ruleBreak;
    for(int i=1; i<n; i++)
        if(nums[i]<nums[i-1]) ruleBreak.insert(i);
    if(ruleBreak.size()==0){
        cout<<nums.size()<<endl;
        for(auto& i : nums) cout<<i<<" ";
        cout<<endl;
        return;
    }
    vector<int> ans;
    for(int i=0; i<nums.size(); i++){
        if(ruleBreak.find(i)!=ruleBreak.end())
            ans.push_back(nums[i]);
        ans.push_back(nums[i]);
    }
    cout<<ans.size()<<endl;
    for(auto& i : ans) cout<<i<<" ";
    cout<<endl;
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
        possibleSequence(nums, n);
    }
    return 0;
}
