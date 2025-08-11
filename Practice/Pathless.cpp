#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin>>n>>s;
        vector<int> nums(n);
        int sum=0, zeroCount=0, oneCount=0, twoCount=0;
        for(auto& i : nums){
            cin>>i;
            if(i==0) zeroCount++;
            else if(i==1) oneCount++;
            else twoCount++;
            sum+=i;
        }
        if(sum==s) cout<<-1<<endl;
        else if(sum>s){
            for(auto& i : nums) cout<<i<<" ";
            cout<<endl;
        }else{
            if(s-sum==1){
                while(zeroCount--) cout<<0<<" ";
                while(twoCount--) cout<<2<<" ";
                while(oneCount--) cout<<1<<" ";
                cout<<endl;
            }else
                cout<<-1<<endl;
        }
    }
    return 0;
}
