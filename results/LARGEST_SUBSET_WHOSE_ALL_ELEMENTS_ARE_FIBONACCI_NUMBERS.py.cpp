void findFibSubset ( int * arr , int n ) {
  int m = max ( arr ) ;
  int a = 0 ;
  int b = 1 ;
  int hash [ m ] ;
  hash [ a ] = 0 ;
  hash [ b ] = 0 ;
  while ( ( b < m ) && ( a < b ) ) {
    int c = a + b ;
    a = b ;
    b = c ;
    hash [ b ] = b ;
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( arr [ i ] < hash [ i ] ) cout << arr [ i ] << " " ;
  }
}
