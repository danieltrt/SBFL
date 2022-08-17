string strToBinary ( string s ) {
  string binConv ;
  for ( int i = 0 ;
  i < s . length ( ) ;
  i ++ ) {
    char asciiVal = s [ i ] ;
    string binaryVal = s . substr ( asciiVal . length ( ) + 2 ) ;
    binConv += binaryVal . substr ( 2 ) ;
  }
  return ( binConv ) ;
}
