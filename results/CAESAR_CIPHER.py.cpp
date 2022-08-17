string encrypt ( string text , int s ) {
  string result ;
  for ( int i = 0 ;
  i < text . length ( ) ;
  i ++ ) {
    char c = text [ i ] ;
    if ( ( c < ' ' ) || ( c > ' ' ) ) result += ( char ) ( ( ( c - 65 ) % 26 + 65 ) ) ;
    else result += ( char ) ( ( ( c - 97 ) % 26 + 97 ) ) ;
  }
  return result ;
}
