#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

int minSeconds(string& s, string& t){
    int pos=0, timeTaken=0;
    while(pos<s.size() && pos<t.size() && s[pos]==t[pos]) pos++;
    if(pos==0)
        return s.size() + t.size();
    else
        timeTaken=max(s.size(), t.size()) + min(s.size(), t.size()) - pos + 1; // pos + 1 + (min-pos) + (max-pos)
    return timeTaken;
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        string s, t;
        cin>>s>>t;
        cout<<minSeconds(s, t)<<endl;
    }
    return 0;
}
