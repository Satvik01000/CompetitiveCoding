#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(string a, string b){
    unordered_map<char, int> freq;
    for(auto& i : b) freq[i]++;

    for(int i=a.size()-1; i>=0; i--){
        if(freq.find(a[i])!=freq.end()){
            freq[a[i]]--;
            if(freq[a[i]]==0) freq.erase(a[i]);
        }else
            a[i]='.';
    }
    string temp="";
    for(auto& i : a)
        if(i!='.') temp+=i;
    return temp==b ? "YES" : "NO";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin>>a>>b;
        cout<<possibleOrNot(a, b)<<endl;
    }
    return 0;
}
