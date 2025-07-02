
#include <bits/stdc++.h>

using namespace std;

const string subseqs[] = { "00", "25", "50", "75" };

const int INF = 100;

int solve(string& s, string& t){
	int ind = s.length() - 1;

	int ans = 0;
	while (ind >= 0 && s[ind] != t[1]){
		ind--;
		ans++;
	}

	if (ind < 0) return INF;

	ind--;

	while (ind >= 0 && s[ind] != t[0]){
		ind--;
		ans++;
	}

	return ind < 0 ? INF : ans;
}

int main(){
	int t;
	cin >> t;

	while (t--){
		string n;
		cin >> n;
		
		int ans = INF;
		for (auto e : subseqs)
			ans = min(ans, solve(n, e));

		cout << ans << '\n';
	}
	return 0;
}