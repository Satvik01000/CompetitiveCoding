#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

string possibleOrNot(vector<long long>& squares){
    long long totalSquares = accumulate(squares.begin(), squares.end(), 0LL);
    long long root = sqrtl(totalSquares);
    return root * root == totalSquares ? "YES" : "NO";
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<long long> squares(n);
        for (long long &i : squares)
            cin >> i;
        cout << possibleOrNot(squares) << '\n';
    }
    return 0;
}