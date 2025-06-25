#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int digitSum(int n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

string whoWins(int n){
    int sum = digitSum(n);
    return ((sum+1)%3==0 || (sum-1)%3==0) ? "First" : "Second";
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
