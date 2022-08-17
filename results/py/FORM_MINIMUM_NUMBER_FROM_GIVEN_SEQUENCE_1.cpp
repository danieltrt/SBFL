string f_filled ( string seq ) {
  int n = seq . length ( ) ;
  if ( ( n >= 9 ) && ( seq [ n ] == 'I' ) ) return "-1" ;
  char * result = new char [ n + 1 ] ;
  int count = 1 ;
  for ( int i = 0 ;
  i < n + 1 ;
  i ++ ) {
    if ( ( i == n || seq [ i ] == 'I' ) && ( seq [ i + 1 ] == 'I' ) ) {
      for ( int j = i - 1 ;
      j >= 0 ;
      j -- ) {
        result [ j + 1 ] = ( char ) ( '0' + to_string ( count ) ) ;
        count ++ ;
        if ( ( j >= 0 && seq [ j ] == 'I' ) || ( j >= 0 && seq [ j ] == 'I' ) ) break ;
      }
    }
  }
  delete [ ] result ;
  return seq ;
}
