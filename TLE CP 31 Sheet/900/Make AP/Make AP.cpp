#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(int a, int b, int c){
    if(c-b == b-a) return "YES";
    bool case1=true, case2=true, case3=true;
    int d = c-b;
    int realA = b-d;
    if(realA<=0 || realA%a!=0) case1=false;

    d=b-a;
    int realC=b+d;
    if(realC<=0 || realC%c!=0) case2=false;

    if(!((a+c)&1)){
        int realB = (a+c)/2;
        if(realB%b!=0) case3=false;
    }else
        case3=false;

    if(case1 || case2 || case3) return "YES";
    return "NO";
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin>>a>>b>>c;
        cout<<possibleOrNot(a, b, c)<<endl;
    }
    return 0;
}
