#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int oneCount = 0, twoCount = 0, threeCount = 0;

    for(char i : s){
        if(i == '1') oneCount++;
        else if(i == '2') twoCount++;
        else if(i == '3') threeCount++;
    }

    bool first = true;

    while(oneCount--){
        if(!first) cout << '+';
        cout << '1';
        first = false;
    }

    while(twoCount--){
        if(!first) cout << '+';
        cout << '2';
        first = false;
    }

    while(threeCount--){
        if(!first) cout << '+';
        cout << '3';
        first = false;
    }

    cout << endl;
    return 0;
}