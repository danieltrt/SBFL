int f_filled ( int * arr , int n , int sum ) {
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    int currSum = arr [ i ] ;
    int j = i + 1 ;
    while ( j <= n ) {
      if ( currSum == sum ) {
        cout << "Sum found between" << endl ;
        cout << "indexes " << i << " and " << j - 1 << endl ;
        return 1 ;
      }
      if ( currSum > sum || j == n ) break ;
      currSum = currSum + arr [ j ] ;
      j ++ ;
    }
  }
  cout << "No subarray found" << endl ;
  return 0 ;
}
