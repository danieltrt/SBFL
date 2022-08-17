int f_filled ( int arr [ ] , int n , int k ) {
  int um [ 8 ] ;
  for ( int i = 0 ;
  i < 8 ;
  i ++ ) {
    um [ i ] = 0 ;
  }
  int modArr [ n ] ;
  int max = 0 ;
  int currSum = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    currSum += arr [ i ] ;
    modArr [ i ] = ( ( currSum % k ) + k ) % k ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( modArr [ i ] == 0 ) || ( modArr [ i ] < um [ modArr [ i ] ] ) ) {
      max = i + 1 ;
    }
    else if ( ( modArr [ i ] < um [ modArr [ i ] ] ) ) {
      um [ modArr [ i ] ] = i ;
    }
    else {
      if ( ( max < ( i - um [ modArr [ i ] ] ) ) || ( max > um [ modArr [ i ] ] ) ) {
        max = i - um [ modArr [ i ] ] ;
      }
    }
  }
  return max ;
}
