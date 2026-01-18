#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(vector<int>& a, vector<int>& b, const int& n, const int& k) {
    
    for(int i = 1; i < n; i++) {
        if(a[i] != 0 && a[i-1] != 0 && a[i] <= a[i-1]) return "YES";
    }

    if(k >= 2) return "YES";

    if(k == 1) {
        for(int i = 0; i < n; i++) {
            if(a[i] == 0) {
                a[i] = b[0];
                break;
            }
        }

        for(int i = 1; i < n; i++)
            if(a[i] <= a[i-1]) return "YES";
    }

    return "NO";
}

int main() {
    fast;
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(k);
    for(auto& i : a) cin >> i;
    for(auto& i : b) cin >> i;

    cout << possibleOrNot(a, b, n, k) << endl;

    return 0;
}