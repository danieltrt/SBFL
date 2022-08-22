void search(int mat[4][4], int n, int x)
{
    int i = 0, j = n-1;  //set indexes for top right element
    while ( i < n && j >= 0 )
    {
        if ( mat[i][j] == x )
        {
            cout << "n Found at " << i << ", " << j;
            return;
        }
        if ( mat[i][j] > x )
            j--;
        else //  if mat[i][j] < x
            i++;
    }
    cout << "n Element not found";
    return;
}