#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string possibleOrNot(vector<int>& heads, vector<int>& body, int n, int m, int k){
    sort(heads.begin(), heads.end());
    sort(body.begin(), body.end());

    int count = 0;
    int i = n - 1;
    int j = m - 1;

    while (i >= 0 && j >= 0) {
        if (body[j] >= heads[i]) {
            count++;
            i--;
            j--;
        } else i--; 
    }
    return count >= k ? "Yes" : "No";
}

int main() {
    fast;
    int n, m, k;
    cin>>n>>m>>k;
    vector<int> heads(n), body(m);
    for(int& i : heads) cin>>i;
    for(int& i : body) cin>>i;

    cout<<possibleOrNot(heads, body, n, m, k)<<endl;
    return 0;
}