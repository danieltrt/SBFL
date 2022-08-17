int f_filled ( int arr [ ] , int n ) {
  set < int > us ;
  int even_count = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] % 2 == 0 ) us . insert ( arr [ i ] ) ;
  }
  for ( int i = 0 ;
  i < us . size ( ) ;
  i ++ ) even_count ++ ;
  return pow ( 2 , even_count ) - 1 ;
}
