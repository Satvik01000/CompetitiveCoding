#include <bits/stdc++.h>
using namespace std;
/*
1 2
1
2 1
2 3
*/
int minSteps(vector<int>& a, int s) {
    if(a.size()==1)
        return abs(s-a[0]);
    if(s<=a[0])
        return a[a.size()-1]-s;
    if(s>=a.back())
        return s-a[0];
    int minX = a[0];
    int maxX = a.back();
    int steps=0;
    if(s-minX < maxX-s)
        steps+=(s-minX) + (maxX-minX);
    else
        steps+=(maxX-s) + (maxX-minX);
    return steps;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, s;
        cin >> n >> s;
        vector<int> a(n);
        for (int& x : a) cin >> x;
        cout << minSteps(a, s) << '\n';
    }
    return 0;
}
