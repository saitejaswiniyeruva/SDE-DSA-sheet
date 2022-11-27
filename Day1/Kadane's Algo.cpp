//Question: https://takeuforward.org/data-structure/kadanes-algorithm-maximum-subarray-sum-in-an-array/
//Time complexity: O(n)
//Space complexity: O(1)



#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector < int > & nums) {
    int msf = INT_MIN, meh = 0;
    for (int i = 0; i < nums.size(); i++) {
        meh += nums[i];
        if (meh > msf) {
            msf = meh;
        }
        if (meh < 0) {
            meh = 0;
        }
    }

    return msf;
}

int main() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int lon = maxSubArray(arr);
    cout << lon << endl;
    return 0;
}
