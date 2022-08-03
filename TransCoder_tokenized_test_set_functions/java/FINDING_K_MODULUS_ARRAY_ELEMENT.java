static void printEqualModNumbers ( int arr [ ], int n ) {
  Arrays . sort ( arr );
  int d = arr [ n - 1 ] - arr [ 0 ];
  Vector < Integer > v = new Vector < > ( );
  for ( int i = 1;
  i * i <= d;
  i ++ ) {
    if ( d % i == 0 ) {
      v . add ( i );
      if ( i != d / i ) v . add ( d / i );
    }
  }
  for ( int i = 0;
  i < v . size ( );
  i ++ ) {
    int temp = arr [ 0 ] % v . get ( i );
    int j;
    for ( j = 1;
    j < n;
    j ++ ) if ( arr [ j ] % v . get ( i ) != temp ) break;
    if ( j == n ) System . out . print ( v . get ( i ) + " " );
  }
}