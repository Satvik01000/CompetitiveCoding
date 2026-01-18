#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

bool isPalindrome(const string& s) {
    int i = 0, j = s.size() - 1;
    while (i < j) {
        if (s[i] != s[j]) return false;
        i++;
        j--;
    }
    return true;
}

string possibleOrNot(string& s){
    int n = s.size();
    bool flag = true;
    for (int i = 1; i < n; i++) {
        if(s[i]!=s[i-1]) {
            flag = false;
            break;
        }
    }
    if(flag) return "-1";
    if(isPalindrome(s))  sort(s.begin(), s.end());
    return s;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin>>s;
        cout<<possibleOrNot(s)<<endl;
    }
    return 0;
}
