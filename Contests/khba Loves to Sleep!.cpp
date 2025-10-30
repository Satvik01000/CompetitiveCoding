#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll N, K, X;
vector<ll> A;

// Returns how many teleports we can place 
// so that each is >= d distance away from every friend.
ll canPlace(ll d) {
    ll count = 0;

    // Before the first friend
    count += max(0LL, A[0] - d + 1);

    // Between friends
    for(int i = 0; i < N - 1; i++) {
        ll gap = A[i + 1] - A[i] - 2 * d + 1;
        if(gap > 0) count += gap;
    }

    // After the last friend
    count += max(0LL, X - A.back() - d + 1);

    return count;
}

void solve() {
    cin >> N >> K >> X;
    A.resize(N);
    for(ll &i : A) cin >> i;
    sort(A.begin(), A.end());

    // Binary search for maximum d
    ll low = 0, high = X;
    while(low < high) {
        ll mid = low + (high - low + 1) / 2;
        if(canPlace(mid) >= K)
            low = mid;
        else
            high = mid - 1;
    }

    ll d = low; // Maximum minimum distance found

    // Construct positions now
    vector<ll> positions;

    // Place before first friend
    for(ll pos = 0; pos <= A[0] - d && positions.size() < K; pos++)
        positions.push_back(pos);

    // Place between friends
    for(int i = 0; i < N - 1 && positions.size() < K; i++) {
        for(ll pos = A[i] + d + 1; pos <= A[i + 1] - d - 1 && positions.size() < K; pos++)
            positions.push_back(pos);
    }

    // Place after last friend
    for(ll pos = A.back() + d + 1; pos <= X && positions.size() < K; pos++)
        positions.push_back(pos);

    // Output any order allowed
    for(int i = 0; i < K; i++)
        cout << positions[i] << " ";
    cout << "\n";
}

int main(){
    fast;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
