string findLeft ( string str ) {
  int n = str . length ( ) - 1 ;
  ;
  while ( ( n > 0 ) && ( str [ n ] == 'd' ) ) {
    str = str . substr ( 0 , n ) + 'c' + str . substr ( n + 1 ) ;
    ;
    break ;
  }
  ;
  if ( ( n == 0 ) || ( str [ n ] == 'b' ) ) {
    str = str . substr ( 0 , n ) + 'a' + str . substr ( n + 1 ) ;
    ;
    break ;
  }
  ;
  if ( ( n == 0 ) || ( str [ n ] == 'a' ) ) {
    str = str . substr ( 0 , n ) + 'b' + str . substr ( n + 1 ) ;
    ;
  }
  ;
  if ( ( n == 0 ) || ( str [ n ] == 'c' ) ) {
    str = str . substr ( 0 , n ) + 'd' + str . substr ( n + 1 ) ;
    ;
  }
  ;
  n -- ;
}
