#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int shortestPossibleLength(string& s, int n){
    if(n==1) return 1;
    int i=0, j=n-1;
    while(i<j){
        if(s[i]==s[j]) return j-i+1;
        i++; j--;
    }
    return n%2==0 ? 0 : 1;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        cout<<shortestPossibleLength(s, n)<<endl;
    }
    return 0;
}
