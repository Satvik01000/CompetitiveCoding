#include <bits/stdc++.h>
using namespace std;

string possibleOrNot(int l1, int b1, int l2, int b2, int l3, int b3){
    // Case 1: two rectangles (2 and 3) side by side below rectangle 1
    if ((l2 + l3 == l1) && (b2 == b3) && (b1 + b2 == l1)) return "YES";
    // Case 2: two rectangles (2 and 3) stacked vertically next to rectangle 1
    else if ((l2 == l3) && (b1 == b2 + b3) && (b1 == l1 + l2)) return "YES";
    // Case 3: all lengths equal, stack vertically
    else if ((l1 == l2) && (l2 == l3) && (b1 + b2 + b3 == l1)) return "YES";
    // Case 4: all breadths equal, place horizontally
    else if ((b1 == b2) && (b2 == b3) && (l1 + l2 + l3 == b1)) return "YES";
    // All other cases
    else return "NO";

}

int main() {
    int t;
    cin >> t; // number of test cases

    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        cout<<possibleOrNot(l1, b1, l2, b2, l3, b3)<<endl;
    }

    return 0;
}
