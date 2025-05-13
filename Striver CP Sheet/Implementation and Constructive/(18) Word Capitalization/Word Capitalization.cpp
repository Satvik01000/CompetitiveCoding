#include<bits/stdc++.h>
using namespace std;

int main(){
    string word;
    cin>>word;
    word[0]=((word[0]>=97 && word[0]<=122) ? word[0]-=32 : word[0]);
    cout<<word<<endl;
    return 0;
}