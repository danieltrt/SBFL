bool checkDuplicatesWithinK ( int * arr , int n , int k ) {
  int * myset = new int [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] == myset [ i ] ) return true ;
    myset [ i ] = arr [ i ] ;
    if ( ( i >= k ) && ( i < k ) ) myset [ i - k ] = arr [ i ] ;
  }
  return false ;
}
