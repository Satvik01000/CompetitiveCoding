#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin >> word;

    bool allUpper = true;
    bool exceptFirstUpper = true;

    // Check if all letters are uppercase
    for(char& c : word){
        if(!isupper(c)){
            allUpper = false;
            break;
        }
    }

    // Check if all except the first are uppercase
    for(int i = 1; i < word.size(); i++){
        if(!isupper(word[i])){
            exceptFirstUpper = false;
            break;
        }
    }

    if(allUpper || exceptFirstUpper){
        for(char& c : word){
            if(islower(c))
                c = toupper(c);
            else
                c = tolower(c);
        }
    }

    cout << word << endl;
    return 0;
}
