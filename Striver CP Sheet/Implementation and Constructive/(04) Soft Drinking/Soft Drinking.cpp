#include<bits/stdc++.h>
using namespace std;
int minDrinkThatCanBeMade(int n, int k, int l, int c, int d, int p, int nl, int np){
    int totalDrink = k*l;
    int totalToastsWithDrink=totalDrink/nl;
    int totalToastWithLimeSlices=d*c;
    int totalToastWithSalt=p/np;

    return min({totalToastsWithDrink, totalToastWithSalt, totalToastWithLimeSlices})/n;
}
int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    cout<<minDrinkThatCanBeMade(n, k, l, c, d, p, nl, np)<<endl;

    return 0;
}