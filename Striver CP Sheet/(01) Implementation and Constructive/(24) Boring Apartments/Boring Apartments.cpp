#include<bits/stdc++.h>
using namespace std;

int numberOfDigitPresses(string num){
    int ans=0;
    for(int i=1; i<static_cast<int>(num[0]-'0'); i++)
        ans+=10;
    int n=num.size();
    ans+=((n)*(n+1))/2;

    return ans;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        string num;
        cin>>num;
        cout<<numberOfDigitPresses(num)<<endl;
    }
    return 0;
}