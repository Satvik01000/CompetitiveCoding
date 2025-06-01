#include<bits/stdc++.h>
using namespace std;

string format(int t){
    string ans="";
    if(t<10)
        ans+="0"+to_string(t);
    else
        ans+=to_string(t);
    return ans;
}

string middleOfTheContest(int h1, int m1, int h2, int m2){
    if(h1==h2){
        string ans=format(h1);
        ans+=":" + format((m1+m2)/2);
        return ans;
    }
    int t1=h1*60 + m1, t2=h2*60 + m2;
    int t3=(t1+t2)/2;

    int h3=t3/60, m3=t3%60;
    
    string ansH=format(h3), ansM=format(m3);
    return ansH+":"+ansM;
}

int main(){
    string t1, t2;
    int h1, m1, h2, m2;
    cin>>t1>>t2;
    h1 = stoi(t1.substr(0, 2)), m1 = stoi(t1.substr(3, 2));
    h2 = stoi(t2.substr(0, 2)), m2 = stoi(t2.substr(3, 2));
    cout<<middleOfTheContest(h1, m1, h2, m2)<<endl;
    return 0;
}