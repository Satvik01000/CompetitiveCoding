#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

string stringLCM(string& s, string& t){
    int l1=s.size(), l2=t.size();
    int num=gcd(l1, l2);
    cout<<num<<endl;
    l1/=num;
    l2/=num;

    string temp1="", temp2="";
    while(l2--)
        temp1+=s;
    while(l1--)
        temp2+=t;
    
    return temp1==temp2 ? temp1 : "-1";
}

int main(){
    int q;
    cin>>q;

    while(q--){
        string s, t;
        cin>>s>>t;
        cout<<stringLCM(s, t)<<endl;
    }
    return 0;
}