void commonCharacters ( string strings , int n ) {
  bool prim [ MAX_CHAR ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    bool sec [ MAX_CHAR ] ;
    for ( int j = 0 ;
    j < strings [ i ] . length ( ) ;
    j ++ ) {
      if ( ( prim [ ( int ) strings [ i ] [ j ] - 'a' ] ) != 0 ) sec [ ( int ) strings [ i ] [ j ] - 'a' ] = true ;
    }
    for ( int i = 0 ;
    i < MAX_CHAR ;
    i ++ ) prim [ i ] = sec [ i ] ;
  }
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) if ( ( prim [ i ] ) ) cout << ( i + 'a' ) << " " ;
}
