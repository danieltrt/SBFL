char f_filled ( string strA , string strB ) {
  int res = 0 ;
  for ( int i = 0 ;
  i < strA . length ( ) ;
  i ++ ) res = res ^ ( ( int ) strA [ i ] ) ;
  for ( int i = 0 ;
  i < strB . length ( ) ;
  i ++ ) res = res ^ ( ( int ) strB [ i ] ) ;
  return ( ( char ) res ) ;
}
