string f_filled ( string seq ) {
  int n = seq . length ( ) ;
  if ( n >= 9 ) return "-1" ;
  string result ;
  result . reserve ( n + 1 ) ;
  int count = 1 ;
  for ( int i = 0 ;
  i <= n ;
  i ++ ) {
    if ( i == n || seq [ i ] == 'I' ) {
      for ( int j = i - 1 ;
      j >= - 1 ;
      j -- ) {
        result += ( char ) ( ( int ) '0' + count ++ ) ;
        if ( j >= 0 && seq [ j ] == 'I' ) break ;
      }
    }
  }
  return result ;
}
