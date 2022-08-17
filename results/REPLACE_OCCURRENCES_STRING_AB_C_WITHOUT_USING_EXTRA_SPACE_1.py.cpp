void translate ( string st ) {
  int l = st . length ( ) ;
  if ( ( l < 2 ) || ( l == l - 1 ) ) return ;
  int i = 0 ;
  int j = 0 ;
  while ( ( j < l - 1 ) && ( st [ j ] == 'A' && st [ j + 1 ] == 'B' ) ) {
    j += 2 ;
    st [ i ] = 'C' ;
    i ++ ;
    continue ;
  }
  st [ i ] = st [ j ] ;
  i ++ ;
  j ++ ;
}
