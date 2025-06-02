#include <bits/stdc++.h>
using namespace std;

int oddCount(int r, int g, int b, int w){
    return (r % 2) + (g % 2) + (b % 2) + (w % 2);
}

string palindromePossibleOrNot(int r, int g, int b, int w){
    if (oddCount(r, g, b, w) <= 1)
        return "YES";

    if (r > 0 && g > 0 && b > 0) {
        r--; g--; b--; w += 3;
        if (oddCount(r, g, b, w) <= 1)
            return "YES";
    }

    return "NO";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int r, g, b, w;
        cin >> r >> g >> b >> w;
        cout << palindromePossibleOrNot(r, g, b, w) << endl;
    }
    return 0;
}
