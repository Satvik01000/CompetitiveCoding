#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int minTimeToCross(string& s, const char& c, const int& n){
    string temp = s;
    temp+=s;
    vector<int> greenIndices;
    for(int i=0; i<temp.size(); i++) 
        if(temp[i]=='g') greenIndices.push_back(i);

    int i=0, j=0;
    int ans=0;
    while(i<n){
        if(s[i]==c) ans=max(ans, greenIndices[j]-i);
        if(greenIndices[j]<=i) j++;
        i++;
    }
    return ans;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        char c;
        string s;
        cin>>n>>c;
        cin>>s;
        cout<<minTimeToCross(s, c, n)<<endl;
    }
    return 0;
}