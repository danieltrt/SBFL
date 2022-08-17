int f_filled ( string str ) {
  int l = str . length ( ) ;
  int * open = new int [ l + 1 ] ;
  int * close = new int [ l + 1 ] ;
  int index = - 1 ;
  open [ 0 ] = 0 ;
  close [ l ] = 0 ;
  if ( ( str [ 0 ] == '(' ) && ( str [ 1 ] == ')' ) ) open [ 1 ] = 1 ;
  if ( ( str [ l - 1 ] == ')' ) && ( str [ l - 1 ] == '(' ) ) close [ l - 1 ] = 1 ;
  for ( int i = 1 ;
  i < l ;
  i ++ ) {
    if ( ( str [ i ] == '(' ) && ( str [ i + 1 ] == ')' ) ) open [ i + 1 ] = open [ i ] + 1 ;
    else open [ i + 1 ] = open [ i ] ;
  }
  for ( int i = l - 2 ;
  i >= 0 ;
  i -- ) {
    if ( ( str [ i ] == ')' ) && ( str [ i ] == '(' ) ) close [ i ] = close [ i + 1 ] + 1 ;
    else close [ i ] = close [ i + 1 ] ;
  }
  if ( ( open [ l ] == 0 ) && ( close [ 0 ] == 0 ) ) return strlen ( str . c_str ( ) ) ;
  if ( ( close [ l ] == 0 ) && ( open [ l ] == close [ l ] ) ) return 0 ;
  for ( int i = 0 ;
  i < l + 1 ;
  i ++ ) {
    if ( ( open [ i ] == close [ i ] ) && ( open [ i ] == 0 ) ) index = i ;
  }
  delete [ ] open ;
  delete [ ] close ;
  return index ;
}
