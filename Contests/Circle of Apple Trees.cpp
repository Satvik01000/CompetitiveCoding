#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        unordered_set<int> beauties;
        vector<int> nums(n);
        for(auto& i : nums) {
            cin>>i;
            beauties.insert(i);
        }
        cout<<beauties.size()<<endl;
    }
    return 0;
}
