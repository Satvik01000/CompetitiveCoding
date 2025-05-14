#include<bits/stdc++.h>
using namespace std;

int main(){
    string tableCard;
    string handCards;

    cin>>tableCard;
    getline(cin >> ws, handCards);
    for(int i=0; i<handCards.size()-1; i+=3){
        if(handCards[i]==tableCard[0] || handCards[i+1]==tableCard[1]){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}