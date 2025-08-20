#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long
 
int main(){
    int t;
    cin >> t;
 
    while(t--){
        int w, h;
        cin >> w >> h;
 
        ll maxArea = 0;
 
        for(int side = 0; side < 4; side++){
            int s;
            cin >> s;
            int first, last;
            cin>>first;
            for(int i=1; i<s; i++) cin>>last;
 
            ll base = last-first;
            ll height = (side < 2) ? h : w;
 
            ll area = base * height;
            maxArea = max(maxArea, area);
        }
 
        cout << maxArea << endl;
    }
    return 0;
}