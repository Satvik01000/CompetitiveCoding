#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

vector<string> ans;

void helper(string &cur, vector<int> &charFreq, int n) {
    if ((int)cur.size() == n) {
        ans.push_back(cur);
        return;
    }

    for (int i = 0; i < 26; i++) {
        if (charFreq[i] == 0) continue;

        charFreq[i]--;
        cur.push_back('a' + i);

        helper(cur, charFreq, n);

        cur.pop_back();
        charFreq[i]++;
    }
}

int main() {
    fast;
    
    string s;
    cin >> s;

    vector<int> freq(26, 0);
    for (char c : s) freq[c - 'a']++;

    string cur;
    helper(cur, freq, s.size());

    cout << ans.size() << "\n";
    for (auto &str : ans) cout << str << "\n";

    return 0;
}