#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(int& a, int& b){
    // Start from {0, 0} and see if we can reach a and b
    // we will say perform x number of {1,2} and y number of {2, 1}
    // a    b
//  y  2    1
//  x  1    2   
    // x + 2y = a and 2x + y = b
    // x = (2b - a)/3
    // y = (2a - b)/3

    if((2*b - a >=0 && (2*b-a)%3==0) && (2*a-b >=0 && (2*a-b)%3==0)) return "YES";
    return "NO";
}

int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        cout<<possibleOrNot(a, b)<<endl;
    }
    return 0;
}
