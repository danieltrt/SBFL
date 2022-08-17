int f_filled ( string n ) {
  int i = 0 ;
  int j = n . length ( ) ;
  int pos = 0 ;
  while ( ( i < j ) && ( i < n . length ( ) ) ) {
    if ( ( n [ i ] == '4' ) || ( n [ i ] == '7' ) ) pos = pos * 2 + 1 ;
    if ( ( n [ i ] == '2' ) || ( n [ i ] == '3' ) ) pos = pos * 2 + 2 ;
    i = i + 1 ;
  }
  return pos ;
}
