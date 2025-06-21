#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    sort(a.begin(), a.end());

    // If the largest is not less than the sum of two before it, no valid circle possible
    if (a[n - 1] >= a[n - 2] + a[n - 3]) {
        cout << "NO" << endl;
        return 0;
    }

    // Swap last two to avoid the largest being at the end
    swap(a[n - 1], a[n - 2]);

    cout << "YES" << endl;
    for (int x : a) cout << x << " ";
    cout << endl;

    return 0;
}