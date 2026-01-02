#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string helper(string& n){
    unordered_map<char, int> freqMap;
    for(auto& i : n) freqMap[i]++;

    int oddCount = 0;
    for(auto& i : freqMap) {
        if((i.second&1)) oddCount++;
        if(oddCount>1) return "NO SOLUTION";
    }

    string ans = "";
    char oddChar;
    for(auto& i : freqMap){
        int size = i.second;
        if(size&1){
            oddChar = i.first;
            continue;
        }
        for(int j = 0; j<size/2; j++) ans+=i.first;
    }
    
    string odd = "";
    int size = freqMap[oddChar];
    while(size--) odd+=oddChar;

    string temp = ans;
    reverse(temp.begin(), temp.end());
    ans = ans + odd + temp;
    return ans;
}

int main() {
    fast;
    string n;
    cin>>n;
    cout<<helper(n)<<endl;
    return 0;
}
