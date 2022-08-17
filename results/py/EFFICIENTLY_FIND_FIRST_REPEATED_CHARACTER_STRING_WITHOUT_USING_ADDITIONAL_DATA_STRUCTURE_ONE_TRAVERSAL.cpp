int f_filled ( string string ) {
  int checker = 0 ;
  int pos = 0 ;
  for ( int i = 0 ;
  i < string . length ( ) ;
  i ++ ) {
    int val = string [ i ] - 'a' ;
    ;
    if ( ( ( checker & ( 1 << val ) ) > 0 ) return pos ;
    checker |= ( 1 << val ) ;
    pos ++ ;
  }
  return - 1 ;
}
