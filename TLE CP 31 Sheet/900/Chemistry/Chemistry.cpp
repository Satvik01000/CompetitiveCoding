#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(string& s, int n, int k){
    unordered_map<char, int> charFreq;
    for(char& i : s) charFreq[i]++;
    int count=0;
    for(auto& i : charFreq)
        if(i.second%2!=0) count++;
    return count<=k+1 ? "YES" : "NO";
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