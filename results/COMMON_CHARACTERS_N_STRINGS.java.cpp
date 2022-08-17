void common_characters ( string str , int n ) {
  bool prim [ MAX_CHAR ] ;
  memset ( prim , true , sizeof ( bool ) * MAX_CHAR ) ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    bool sec [ MAX_CHAR ] ;
    memset ( sec , false , sizeof ( bool ) * MAX_CHAR ) ;
    for ( int j = 0 ;
    j < str [ i ] . length ( ) ;
    j ++ ) {
      if ( prim [ str [ i ] [ j ] - 'a' ] ) {
        sec [ str [ i ] [ j ] - 'a' ] = true ;
      }
    }
    memset ( prim , false , sizeof ( bool ) * MAX_CHAR ) ;
  }
  for ( int i = 0 ;
  i < 26 ;
  i ++ ) if ( prim [ i ] ) {
    cout << char ( i + 97 ) ;
    cout << " " ;
  }
}
