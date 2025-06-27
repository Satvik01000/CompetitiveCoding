#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int x=arr[0];
        for(int i=1;i<n;i++){
            x^=arr[i];
        }
        if(n%2==0 && x!=0) cout<<-1<<endl;
        else cout<<x<<endl;
    }
}