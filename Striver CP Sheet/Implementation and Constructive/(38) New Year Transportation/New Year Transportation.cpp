#include<bits/stdc++.h>
using namespace std;

void possibleOrNot(vector<int>& homes, int t){
    int pos = 0;
    while(pos < t && pos<homes.size())
        pos = pos + homes[pos];
    cout << (pos == t ? "YES" : "NO") << endl;
}

int main(){
    int n, t;
    cin >> n >> t;
    vector<int> homes(n - 1);

    for(int& i : homes)
        cin >> i;

    possibleOrNot(homes, t - 1);
    return 0;
}
