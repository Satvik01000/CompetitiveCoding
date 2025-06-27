#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

string possibleOrNot(vector<int>& nums, int n){
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(gcd(nums[i], nums[j])<=2) return "YES";
        }
    }
    return "NO";
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
        cout<<possibleOrNot(nums, n)<<endl;
    }
    return 0;
}
