int sequence ( int n ) {
  int f [ n + 1 ] ;
  for ( int i = 3 ;
  i <= n ;
  i ++ ) {
    int r = f [ f [ i - 1 ] ] + f [ i - f [ i - 1 ] ] ;
    f [ i ] = r ;
    ;
  }
  return r [ n ] ;
}
