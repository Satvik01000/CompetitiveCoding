#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(string& num){
    int n = num.size();
    int bal=0;
    for(int i = 1; i < n-1; i++){
        if(num[i]=='(') bal++;
        else bal--;
        if(bal<0) return "YES";
    }
    if(bal==0) return "NO";
    return "YES";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin>>n;
        cout<<possibleOrNot(n)<<endl;
    }
    return 0;
}
