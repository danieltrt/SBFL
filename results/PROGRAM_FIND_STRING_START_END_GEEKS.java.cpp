bool isCornerPresent ( string str , string corner ) {
  size_t n = str . length ( ) ;
  size_t cl = corner . length ( ) ;
  if ( n < cl ) return false ;
  return ( str . substr ( 0 , cl ) == corner && str . substr ( n - cl , n ) == corner ) ;
}
