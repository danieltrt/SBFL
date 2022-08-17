bool f_filled ( string str , string corner ) {
  int n = str . length ( ) ;
  int cl = corner . length ( ) ;
  if ( ( n < cl ) || ( n > cl ) ) return false ;
  return ( ( str . substr ( 0 , cl ) == corner ) && ( str . substr ( n - cl ) == corner ) ) ;
}
