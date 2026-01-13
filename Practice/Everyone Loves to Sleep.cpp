#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

string helper(vector<pair<int, int>>& alarmTime, int H, int M){
    int sleepTime = (H*60) + M;
    int ans = INT_MAX;
    for(auto& i : alarmTime) {
        int time = (i.first*60) + i.second;
        if (time < sleepTime) {
            int temp = 1440 - sleepTime;
            ans = min(ans, time+temp);
        } else 
            ans = min(ans, time-sleepTime);
    }
    string hour = to_string(ans/60);
    string minute = to_string(ans%60);

    return hour + " " + minute;
}

int main() {
    fast;
    int t;
    cin>>t;

    while(t--){
        int n, H, M;
        cin>>n>>H>>M;

        vector<pair<int, int>> alarmTime(n);
        bool flag = false;
        for(int i = 0; i<n; i++) {
            int h, m;
            cin>>h>>m;
            if(h==H && m==M) flag = true;
            alarmTime[i] = {h, m};
        }
        if(flag) cout<<"0 0"<<endl;
        else cout<<helper(alarmTime, H, M)<<endl;
    }
    return 0;
}
