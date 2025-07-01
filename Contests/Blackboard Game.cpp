#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string whoWins(int n){
    vector<int> nums(n);
    for(int i=0; i<n; i++) nums[i]=i;
    bool aliceTurn=true, bobTurn=false;

    while(true){
        int a=-1;
        for(int i=0; i<n; i++){
            if(nums[i]!=-1){
                a=nums[i];
                nums[i]=-1;
                break;
            }
        }
        if(a==-1) return "Bob";
        
        bool bobFound=false;
        for(int i=0; i<n; i++){
            if(nums[i]!=-1 && (a+nums[i])%4 == 3){
                nums[i]=-1;
                bobFound=true;
                break;
            }
        }
        if(!bobFound) return "Alice";
    }
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        cout<<whoWins(n)<<endl;
    }
    return 0;
}
