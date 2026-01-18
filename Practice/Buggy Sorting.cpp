#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

void helper(int n, vector<int>& nums){
    if(n==1 || n==2) {
        cout<<-1<<endl;
        return;
    }
    for(int i = n; i>0; i--) cout<<i<<" ";
    cout<<endl;
}

int main() {
    fast;
    int n;
    cin>>n;
    vector<int> nums;
    helper(n, nums);
    return 0;
}
