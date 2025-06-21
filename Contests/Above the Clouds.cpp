#include<bits/stdc++.h>
using namespace std;
 
void work(int n, string s){
  map<char, int> cnt;
  for(int i = 0; i < s.size(); i++){
    if(i && i < n - 1 && (cnt[s[i]] || s[i] == s[n - 1])){
      cout << "Yes\n";
      return;
    }
    cnt[s[i]]++;
  }
  cout << "No\n";
}
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int t;
  cin >> t;
  while(t--) {
    int n;
    string s;
    cin >> n >> s;    
    work(n, s);
  }
}