#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(string& s, const int& n, const int& k){
    int oneCount = 0, zeroCount = 0;
    for(auto& i : s) (i == '1' ? oneCount++ : zeroCount++);
    
    int bad_pairs_needed = n / 2 - k;
    if (zeroCount < bad_pairs_needed || oneCount < bad_pairs_needed) return "NO";
    
    int zeros_remaining = zeroCount - bad_pairs_needed;
    if (zeros_remaining % 2 != 0) return "NO";
    return "YES";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        cout<<possibleOrNot(s, n, k)<<endl;
    }
    return 0;
}