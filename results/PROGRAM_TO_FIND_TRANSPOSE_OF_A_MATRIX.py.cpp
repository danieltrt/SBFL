void transpose ( int * * A , int * * B ) {
  for ( int i = 0 ;
  i < N ;
  i ++ ) {
    for ( int j = 0 ;
    j < N ;
    j ++ ) {
      B [ i ] [ j ] = A [ j ] [ i ] ;
    }
  }
}
