#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(int n, vector<int>& nums){
    if(n==2) return "Yes";
    unordered_map<int, int> freq;
    for(int i=0; i<n; i++) freq[nums[i]]++;
    if(freq.size()==1) return "Yes";
    if(freq.size()>2) return "No";
    vector<int> temp;
    for(auto& i : freq) temp.push_back(i.second);
    return abs(temp[0]-temp[1])<=1 ? "Yes" : "No";
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
        cout<<possibleOrNot(n, nums)<<endl;
    }
    return 0;
}
