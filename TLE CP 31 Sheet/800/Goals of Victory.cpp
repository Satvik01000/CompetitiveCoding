#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int missingEfficiency(vector<int>& efficiency, int n){
    int totalEfficiency=0;
    for(int& i : efficiency) totalEfficiency+=i;

    return -1*totalEfficiency;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> efficiency(n-1);
        for(int& i : efficiency) cin>>i;
        cout<<missingEfficiency(efficiency, n)<<endl;
    }
    return 0;
}
