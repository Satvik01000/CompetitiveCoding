#include<iostream>
using namespace std;

int minimalSquareArea(int a, int b){
    int side1 = max(2 * a, b);
    int side2 = max(2 * b, a);
    int side = min(side1, side2);
    return side * side;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        int a, b;
        cin>>a>>b;

        cout<<minimalSquareArea(a, b)<<endl;
    }
    return 0;
}