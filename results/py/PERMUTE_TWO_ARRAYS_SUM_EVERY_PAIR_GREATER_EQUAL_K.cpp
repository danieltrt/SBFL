bool f_filled ( int * a , int * b , int n , int k ) {
  sort ( a , b + n ) ;
  sort ( a + n , b + n ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( a [ i ] + b [ i ] < k ) && ( a [ i ] + b [ i ] < k ) ) return false ;
  }
  return true ;
}
