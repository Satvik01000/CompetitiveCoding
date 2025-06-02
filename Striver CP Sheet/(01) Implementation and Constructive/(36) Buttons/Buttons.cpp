#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin>>n;

    // long long totalPresses=0;
    // for(int i=1; i<=n; i++)
        // totalPresses+=(i*(n-i)+1);
    long long totalPresses=(n*(n*n + 5))/6;
    cout<<totalPresses<<endl;
    return 0;
}