#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int point(const int i, const int j){
    if((i>=5 && i<=6) && (j>=5 && j<=6)) return 5;
    if((i>=4 && i<=7) && (j>=4 && j<=7)) return 4;
    if((i>=3 && i<=8) && (j>=3 && j<=8)) return 3;
    if((i>=2 && i<=9) && (j>=2 && j<=9)) return 2;
    if((i>=1 && i<=10) && (j>=1 && j<=10)) return 1;
    return 0;
}

int main() {
    fast;
    int t;
    cin >> t;
    while (t--) {
        vector<vector<char>> hits(10, vector<char>(10));
        vector<pair<int, int>> arrowHit;
        for(int i=0; i<10; i++){
            for(int j=0; j<10; j++){
                cin>>hits[i][j];
                if(hits[i][j]=='X') arrowHit.push_back({i+1, j+1});
            }
        }
        int sum=0;
        for(pair<int, int>& i : arrowHit) sum+=point(i.first, i.second);
        cout<<sum<<endl;
    }
    return 0;
}
