# include <bits/stdc++.h>
using namespace std;

long long get(long long n){
    long long ans = 0;
    for (long long i = 2; i * i * i <= n;++i)
        ans += n / (1LL*i * i * i);
    return ans;
}

int main(){
    long long m,n=-1;
    cin>>m;
    
    long long low=0,high=5e15;
    while (low<high){
        long long mid = (low+high)/2;
        if (get(mid)<m) 
            low=mid+1;
        else
            high=mid;
    }
    
    if (get(low)==m) n=low;

    cout << n << '\n';
    return 0;
}