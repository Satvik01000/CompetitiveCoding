#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int w, h;
        cin >> w >> h;

        long long maxArea = 0;

        for(int side = 0; side < 4; ++side){
            int s;
            cin >> s;
            vector<int> points(s);
            for(int &i : points) cin >> i;

            long long base = points.back() - points.front();
            long long height = (side < 2) ? h : w;

            long long area = base * height;
            maxArea = max(maxArea, area);
        }

        cout << maxArea << endl;
    }
    return 0;
}
