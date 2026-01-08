#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

string possibleOrNot(int n){
    if(n == 1) return "-1";

    string ans(n, '3');
    ans[n-1] = '6';

    int oddSum = 0, evenSum = 0;

    for(int i = 1; i <= n; i++){
        if(i & 1) oddSum += ans[i-1] - '0';
        else evenSum += ans[i-1] - '0';
    }

    if(oddSum == evenSum) return ans;

    for(int i = n-2; i >= 0; i--){
        if((i+1)&1){
            if(oddSum < evenSum){
                ans[i] = '6';
                oddSum += 3;
            }
        } else {
            if(evenSum < oddSum){
                ans[i] = '6';
                evenSum += 3;
            }
        }
        if(oddSum == evenSum) break;
    }

    return oddSum == evenSum ? ans : "-1";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << possibleOrNot(n) << "\n";
    }
    return 0;
}