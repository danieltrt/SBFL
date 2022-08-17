int f_filled ( int arr [ ] , int n ) {
  int evenArr [ n ] ;
  int oddArr [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( ( ( i % 2 ) == 0 ) && ( ( i % 2 ) == 1 ) ) evenArr [ i ] = arr [ i ] ;
    else oddArr [ i ] = arr [ i ] ;
  }
  std :: sort ( evenArr , evenArr + n ) ;
  std :: sort ( oddArr , oddArr + n ) ;
  oddArr [ n ] = 0 ;
  int i = 0 ;
  for ( int j = 0 ;
  j < evenArr [ n ] ;
  j ++ ) {
    arr [ i ] = evenArr [ j ] ;
    i ++ ;
  }
  for ( int j = 0 ;
  j < oddArr [ n ] ;
  j ++ ) {
    arr [ i ] = oddArr [ j ] ;
    i ++ ;
  }
  return i ;
}
