int f_filled ( int * arr , int n ) {
  queue < int > q ;
  qsort ( arr , n , sizeof ( int ) ) ;
  q . push ( arr [ 0 ] ) ;
  for ( int i = 1 ;
  i < n ;
  i ++ ) {
    int now = q . front ( ) ;
    if ( arr [ i ] >= 2 * now ) {
      q . pop ( ) ;
    }
    q . push ( arr [ i ] ) ;
  }
  return q . size ( ) ;
}
