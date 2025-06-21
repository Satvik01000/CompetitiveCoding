#include<bits/stdc++.h>
using namespace std;

long long maxHappiness(vector<int>& nums, int n, int m, int k){
    int largest=INT_MIN, secondLargest=INT_MIN;
    int largestIndex=-1;

    for(int i=0; i<n; i++){
        if(nums[i]>largest){
            largest=nums[i];
            largestIndex=i;
        }
    }
    for(int i=0; i<n; i++){
        if(nums[i]>secondLargest && i!=largestIndex)
            secondLargest=nums[i];
    }

    long long numberOfGroups = m / (k + 1);
    long long remaining = m % (k + 1);
    long long sumOfOneGroup = 1LL * k * largest + secondLargest;

    return numberOfGroups * sumOfOneGroup + 1LL * remaining * largest;
}

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> nums(n);
    for(int& i : nums)
        cin >> i;
    cout << maxHappiness(nums, n, m, k) << endl;
    return 0;
}
