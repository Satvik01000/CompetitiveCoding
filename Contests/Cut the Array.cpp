#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

int main() {
    fast;
    
    int t;
    cin >> t;
    
    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        bool found = false;
        int result_l = 0, result_r = 0;
        
        // Try all possible cuts: l from 1 to n-2, r from l+1 to n-1
        for(int l = 1; l <= n-2 && !found; l++) {
            for(int r = l+1; r <= n-1 && !found; r++) {
                // Calculate sum remainders for the three parts
                int s1 = 0, s2 = 0, s3 = 0;
                
                // Part 1: indices 0 to l-1
                for(int i = 0; i < l; i++) {
                    s1 = (s1 + a[i]) % 3;
                }
                
                // Part 2: indices l to r-1
                for(int i = l; i < r; i++) {
                    s2 = (s2 + a[i]) % 3;
                }
                
                // Part 3: indices r to n-1
                for(int i = r; i < n; i++) {
                    s3 = (s3 + a[i]) % 3;
                }
                
                // Check if all different or all same
                if((s1 != s2 && s2 != s3 && s1 != s3) || (s1 == s2 && s2 == s3)) {
                    found = true;
                    result_l = l;
                    result_r = r;
                }
            }
        }
        
        if(found) {
            cout << result_l << " " << result_r << "\n";
        } else {
            cout << "0 0\n";
        }
    }
    
    return 0;
}