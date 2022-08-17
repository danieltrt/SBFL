void printRotatedString ( string str ) {
  int lenn = str . length ( ) ;
  int temp [ lenn ] ;
  for ( int i = 0 ;
  i < lenn ;
  i ++ ) {
    int j = i ;
    int k = 0 ;
    while ( ( j < str . length ( ) ) && ( temp [ k ] == str [ j ] ) ) {
      temp [ k ] = str [ j ] ;
      k ++ ;
      j ++ ;
    }
    j = 0 ;
    while ( ( j < i ) && ( temp [ k ] == str [ j ] ) ) {
      temp [ k ] = str [ j ] ;
      j ++ ;
      k ++ ;
    }
    cout << temp [ k ] << " " ;
  }
}
