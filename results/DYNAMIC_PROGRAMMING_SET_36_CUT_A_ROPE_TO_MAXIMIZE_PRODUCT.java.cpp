int maxProd ( int n ) {
  if ( n == 0 || n == 1 ) return 0 ;
  int maxVal = 0 ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    maxVal = max ( maxVal , max ( i * ( n - i ) , maxProd ( n - i ) * i ) ) ;
  }
  return maxVal ;
}
