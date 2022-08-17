bool f_filled ( int * arr , int n ) {
  int max1 = max ( arr ) ;
  int min1 = min ( arr ) ;
  int m = max1 - min1 + 1 ;
  if ( ( m > n ) || ( m < 0 ) ) return false ;
  bool visited [ m ] ;
  memset ( visited , 0 , m ) ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) visited [ arr [ i ] - min1 ] = true ;
  for ( int i = 0 ;
  i <= m ;
  i ++ ) {
    if ( ( visited [ i ] == false ) == false ) return false ;
  }
  return true ;
}
