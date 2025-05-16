#include <bits/stdc++.h>
using namespace std;

string kString(int k, string s) {
    int freq[26] = {0};
    for (char c : s)
        freq[c - 'a']++;

    string block = "";
    for (int i = 0; i < 26; i++) {
        if (freq[i] % k != 0)
            return "-1";
        block += string(freq[i] / k, 'a' + i);
    }

    string ans = "";
    for (int i = 0; i < k; i++)
        ans += block;

    return ans;
}

int main() {
    int k;
    string s;
    cin >> k >> s;
    cout << kString(k, s) << endl;
    return 0;
}
