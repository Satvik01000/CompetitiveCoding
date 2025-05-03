#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    int x = 0;
    while (t--) {
        string query;
        cin >> query;
 
        if (query.find("++") != string::npos)
            x++;
        else if (query.find("--") != string::npos)
            x--;
    }
 
    cout << x << endl;
    return 0;
}