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
        cin >> n;
        vector<int> nums(n);
        ll zeroCount=0, oneCount=0;
        for (auto& i : nums) {
            cin >> i;
            if(i==0) zeroCount++;
            if(i==1) oneCount++;
        }
        cout<<(oneCount * (1LL<<zeroCount))<<endl;
    }
    return 0;
}
