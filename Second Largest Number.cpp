vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int min = *min_element(a.begin(), a.end());
    int max = *max_element(a.begin(), a.end());

    int s = INT_MAX;
    int l = INT_MIN;
    for(int i = 0; i < n; i++ )
    {
        if( a[i] < max and a[i] > l )
        {
            l = a[i];
        }
    }

    for(int i = 0; i < n; i++ )
    {
        if( a[i] > min and a[i] < s )
        {
            s = a[i];
        }
    }

    return {l,s};
}
Second Largest Number
