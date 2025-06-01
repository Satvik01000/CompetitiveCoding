#include<bits/stdc++.h>
using namespace std;

int main(){
    string name;
    cin >> name;
    bool alphabet[26] = {false};

    for(auto& i : name)
        alphabet[i - 'a'] = true;

    int count = 0;
    for(auto& i : alphabet)
        if(i) count++;

    cout << (count % 2 ? "IGNORE HIM!" : "CHAT WITH HER!") << endl;
    return 0;
}