#include<iostream>
using namespace std;

int main(){
    int k, n, w;
    cin>>k>>n>>w;
    int totalCost=0;
    for(int i=1; i<=w; i++)
        totalCost+=(i*k);
    cout<<(n>=totalCost ? 0 : totalCost - n)<<endl;
    return 0;
}