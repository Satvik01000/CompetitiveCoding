#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin>>n>>x;
        vector<int> nums(n);
        ll sum1=0, sum2=0;
        for(auto& i : nums){
            cin>>i;
            sum1+=i;
            sum2+=((i+x-1)/x);
        }
        cout<<((sum1+x-1)/x)<<" "<<sum2<<endl;
    }
    return 0;
}
