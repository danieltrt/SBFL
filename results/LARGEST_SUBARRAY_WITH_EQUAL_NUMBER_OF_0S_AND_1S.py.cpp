int findSubArray ( int arr [ ] , int n ) {
  int sum = 0 ;
  int maxsize = - 1 ;
  for ( int i = 0 ;
  i <= n - 1 ;
  i ++ ) {
    sum = ( arr [ i ] == 0 ) ? - 1 : 1 ;
    for ( int j = i + 1 ;
    j < n ;
    j ++ ) {
      sum = sum + ( arr [ j ] == 0 ) ? - 1 : sum + 1 ;
      if ( ( sum == 0 ) && ( maxsize < j - i + 1 ) ) {
        maxsize = j - i + 1 ;
        startindex = i ;
      }
    }
  }
  if ( ( maxsize == - 1 ) || ( ( arr [ maxsize ] == 0 ) && ( startindex < n ) ) ) {
    cout << "No such subarray" << endl ;
  }
  else {
    cout << startindex << "to" << startindex + maxsize - 1 << endl ;
  }
  return maxsize ;
}
