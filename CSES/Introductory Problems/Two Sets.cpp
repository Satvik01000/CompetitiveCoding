#include <bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define ll long long

ll sum(int& n){
    return 1LL*n*(n+1)/2;
}

void possibleOrNot(int n){
// n = 1 (Total Sum = 1)
// NO

// n = 2 (Total Sum = 3)
// NO

// n = 3 (Total Sum = 6)
// YES
// 1 2
// 3

// n = 4 (Total Sum = 10)
// YES
// 1 4
// 3 5

// n = 5 (Total Sum = 15)
// NO

// n = 6 (Total Sum = 21)
// NO

// n = 7 (Total Sum = 28)
// YES
// 1 3 4 6
// 2 5 7

// n = 8 (Total Sum = 36)
// YES
// 1 2 7 8 
// 3 4 5 6

// n = 9 (Total Sum = 45)
// NO    
    ll totalSum = sum(n);
    if(totalSum&1){
        cout<<"NO"<<endl;
        return;
    }
    cout << "YES" << endl;
    int i = n, j = 1;
    ll currSum = 0;
    vector<int> first;
    while(currSum < totalSum/2){
        currSum+=i;
        first.push_back(i);
        i--;
        if(currSum>=totalSum/2) break;
        currSum+=j;
        first.push_back(j);
        j++;
    }
    cout<<first.size()<<endl;
    for(auto& i : first) cout<<i<<" ";

    cout<<endl<<(n-first.size())<<endl;
    for(; j<=i; j++) cout<<j<<" ";
    cout<<endl;
}

int main() {
    fast;
    int n;
    cin>>n;

    possibleOrNot(n);
    return 0;
}
