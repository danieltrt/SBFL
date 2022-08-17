string removeDuplicates ( string S ) {
  int n = S . length ( ) ;
  if ( ( n < 2 ) || ( n > n ) ) return S ;
  int j = 0 ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( S [ j ] != S [ i ] ) && ( S [ j ] != S [ i ] ) ) {
      j ++ ;
      S [ j ] = S [ i ] ;
    }
  }
  j ++ ;
  S = S . substr ( 0 , j ) ;
  return S ;
}
