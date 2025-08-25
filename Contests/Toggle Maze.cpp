// #include <bits/stdc++.h>
// using namespace std;
// #define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
// #define ll long long

// bool isValid(const int& newRow, const int& newCol, const int& n, const int& m){
//     return (newRow >= 0 && newRow < n && newCol >= 0 && newCol < m);
// }

// int minOperations(vector<vector<char>>& maze, const int& h, const int& w){
//     vector<int> dx = {0, 1, 0, -1};
//     vector<int> dy = {1, 0, -1, 0};
//     vector<vector<int>> dist(h, vector<int>(w, 1e8));
//     queue<tuple<int, int, bool>> q;
//     q.push({0, 0, true});

//     while(!q.empty()){
//         auto [currRow, currCol, state] = q.front();
//         q.pop();

//         for(int i=0; i<4; i++){
//             if(!state) continue;
//             int newRow = currRow+dx[i];
//             int newCol = currRow+dy[i];
//             if(isValid(newRow, newCol, h, w) && maze[newRow][newCol]!='#' || maze[newRow][newCol]!='x' && dist[newRow][newCol]==1e8){
//                 dist[newRow][newCol] = dist[currRow][currCol] + 1;
//                 q.push({newRow, newCol, true});
//             }
//         }
//     }
//     return dist[n-1][n-1] == 1e8 ? -1 : dist[n-1][n-1] + 1;
// }

// int main() {
//     fast;
//     int h, w;
//     cin>>h>>w;
//     vector<vector<char>> maze(h, vector<char>(w));
//     for(int i=0; i<h; i++){
//         for(int j=0; j<w; j++){
//             cin>>maze[i][j];
//             if(maze[0][0]=='#' || maze[0][0]=='x') {
//                 cout<<-1<<endl;
//                 return 0;
//             }
//         }
//     }
//     cout<<minOperations(maze, h, w)<<endl;
//     return 0;
// }
