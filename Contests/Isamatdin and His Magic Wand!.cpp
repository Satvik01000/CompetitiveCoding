#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(vector<int>& nums, const int& size){
    vector<int> odd, even;
    for(auto& i : nums){
        if(i&1) odd.push_back(i);
        else even.push_back(i);
    }
    
    int i = 0, j = 0;
    int n = odd.size(), m = even.size();
    if (odd.empty()) {
        for(auto &i : even) cout << i << " ";
        cout << endl;
        return;
    }
    if (even.empty()) {
        for(auto &i : odd) cout << i << " ";
        cout << endl;
        return;
    }
    
    sort(odd.begin(), odd.end());
    sort(even.begin(), even.end());

    while(i<n && j<m){
        if(odd[i]<even[j]){
            cout<<odd[i]<<" ";
            i++;
        }else{
            cout<<even[j]<<" ";
            j++;
        }
    }
    while(i<n) cout<<odd[i++]<<" ";
    while(j<m) cout<<even[j++]<<" ";
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
        helper(nums, n);
    }
    return 0;
}
