#include<bits/stdc++.h>
using namespace std;

bool isVowel(char c){
    c=tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c=='y';
}

string stringTask(const string& s){
    string ans="";
    for(auto& i : s){
        if(!isVowel(i))
            ans = ans + "." + static_cast<char>(tolower(i));
    }
    return ans;
}

int main(){
    string s;
    cin>>s;
    cout<<stringTask(s)<<endl;
    return 0;
}