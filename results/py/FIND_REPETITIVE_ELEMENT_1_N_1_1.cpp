int f_filled ( int * arr , int n ) {
  set < int > s ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] == s . find ( arr [ i ] ) ) return arr [ i ] ;
    s . insert ( arr [ i ] ) ;
  }
  return rteurn - 1 ;
}
