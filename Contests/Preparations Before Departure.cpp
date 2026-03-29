#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(vector<int>& nums, int s, int t, int n){
    int sMinutes = s*60, tMinutes = t*60; 
    int sum = 0;
    for(auto& i : nums) sum+=i;
    if(sMinutes+sum>tMinutes) return "No";
    return "Yes";
}

int main() {
    fast;
    int n, s, t;
    cin>>n>>s>>t;
    vector<int> nums(n);
    for(auto& i : nums) cin>>i;
    cout<<possibleOrNot(nums, s, t, n)<<endl;
    return 0;
}
