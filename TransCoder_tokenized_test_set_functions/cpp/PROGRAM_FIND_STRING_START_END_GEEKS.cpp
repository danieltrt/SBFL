bool isCornerPresent ( string str, string corner ) {
  int n = str . length ( );
  int cl = corner . length ( );
  if ( n < cl ) return false;
  return ( str . substr ( 0, cl ) . compare ( corner ) == 0 && str . substr ( n - cl, cl ) . compare ( corner ) == 0 );
}