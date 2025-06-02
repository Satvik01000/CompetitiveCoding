#include<bits/stdc++.h>
using namespace std;

void balancedArray(int n){
    if((n/2)%2!=0){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;

    for(int i = 1; i <= n/2; i++)
        cout << 2*i << " ";

    int sum = (n/2) * (n/2 + 1); // Sum of first n/2 even numbers
    for(int i = 1; i < n/2; i++) {
        cout << 2*i - 1 << " ";
        sum -= (2*i - 1);
    }
    cout << sum << endl;
    
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        balancedArray(n);
    }
    return 0;
}