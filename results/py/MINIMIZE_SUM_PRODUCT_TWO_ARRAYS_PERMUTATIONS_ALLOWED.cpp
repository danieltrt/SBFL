int f_filled ( int * A , int * B , int n ) {
  sort ( A ) ;
  sort ( B ) ;
  int result = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) result += ( A [ i ] * B [ n - i - 1 ] ) ;
  return result ;
}
