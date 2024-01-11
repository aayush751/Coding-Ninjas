int isSorted(int n, vector<int> a) {
    // Write your code here.
    bool flag = false;

    for(int i = 0; i < n - 1; i++ )
    {
        if( a[i] > a[i + 1] )
        {
            flag = true;
            break;
        }
    }

    if( flag == true )
    {
        return 0;
    }
    return 1;
}
