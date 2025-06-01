#include<iostream>
using namespace std;

int numberOfOperations(int a, int b, int n){
    int count = 0;
    while(max(a, b) <= n){
        if (a < b)
            a += b;
        else
            b += a;
        count++;
    }
    return count;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b, n;
        cin>>a>>b>>n;
        cout<<numberOfOperations(a, b, n)<<endl;
    }
    return 0;
}