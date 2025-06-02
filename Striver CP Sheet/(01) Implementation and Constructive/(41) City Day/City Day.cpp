#include<bits/stdc++.h>
using namespace std;

bool isPerfectDay(const vector<int>& a, int d, int x, int y) {
    for(int i = max(0, d - x); i < d; i++) 
        if(a[d] >= a[i]) return false;

    for(int i = d + 1; i <= min((int)a.size() - 1, d + y); i++)
        if(a[d] >= a[i]) return false;

    return true;
}

int findPerfectDay(const vector<int>& a, int x, int y) {
    for(int d = 0; d < a.size(); d++)
        if(isPerfectDay(a, d, x, y)) return d + 1;
    
    return -1;
}

int main(){
    int n, x, y;
    cin >> n >> x >> y;
    vector<int> a(n);
    for(auto &i : a)
        cin >> i;

    cout << findPerfectDay(a, x, y) << endl;
    return 0;
}