#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, m, a , b;
		cin >> n >> m;
		int px = 0, py = 0;
		int points = 0;
		while(n--){
			cin >> a >> b;
			points += a - px;
			if(((a - px + 2) % 2) != ((b - py + 2) % 2))points--;
			px = a;
			py = b;
		}
		if(px != m) points += m - px;
		cout << points << endl;
	}
}	 
