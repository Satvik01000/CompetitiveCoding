#include<bits/stdc++.h>
using namespace std;

string isLucky(string num){
    int count=0;
    for(auto& i : num){
        if(i=='4' || i=='7')
            count++;
    }
    return (count==4 || count==7) ? "YES" : "NO";
}

int main(){
    string num;
    cin>>num;
    cout<<isLucky(num)<<endl;
    return 0;
}