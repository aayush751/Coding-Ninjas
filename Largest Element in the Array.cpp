#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int ans = INT_MIN;

    for(int i = 0; i < n; i++ )
    {
        if( arr[i] > ans )
        {
            ans = arr[i];
        } 
    }

    return ans;
}
