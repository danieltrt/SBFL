void printCommonElements ( int * * mat ) {
  map < int , int > mp ;
  for ( int j = 0 ;
  j < N ;
  j ++ ) mp [ mat [ 0 ] [ j ] ] = 1 ;
  for ( int i = 1 ;
  i < M ;
  i ++ ) for ( int j = 0 ;
  j < N ;
  j ++ ) if ( ( mat [ i ] [ j ] < mp . size ( ) && mp [ mat [ i ] [ j ] ] == i ) || ( mat [ i ] [ j ] < mp [ mat [ i ] [ j ] ] && mp [ mat [ i ] [ j ] ] == i ) ) {
    mp [ mat [ i ] [ j ] ] = i + 1 ;
    if ( i == M - 1 ) cout << mat [ i ] [ j ] << " " ;
  }
}
