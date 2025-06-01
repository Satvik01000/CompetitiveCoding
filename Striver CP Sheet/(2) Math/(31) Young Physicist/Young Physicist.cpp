#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int sum_x=0, sum_y=0, sum_z=0;
    while(n--){
        int x, y, z;
        cin>>x>>y>>z;
        sum_x+=x;
        sum_y+=y;
        sum_z+=z;
    }
    cout<<((sum_z==0 && sum_y==0 && sum_x==0) ? "YES" : "NO")<<endl;
}