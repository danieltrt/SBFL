int luDecomposition ( int * * mat , int n ) {
  int * * lower = new int * [ n ] ;
  for ( int y = 0 ;
  y < n ;
  y ++ ) lower [ y ] = new int [ n ] ;
  ;
  int * * upper = new int [ n ] ;
  for ( int y = 0 ;
  y < n ;
  y ++ ) upper [ y ] = new int [ n ] ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int k = i ;
    k < n ;
    k ++ ) {
      int sum = 0 ;
      for ( int j = 0 ;
      j < i ;
      j ++ ) sum += ( lower [ i ] [ j ] * upper [ j ] [ k ] ) ;
      ;
      upper [ i ] [ k ] = mat [ i ] [ k ] - sum ;
    }
    ;
  }
  ;
  for ( int k = i ;
  k < n ;
  k ++ ) {
    if ( ( i == k ) || ( i == n ) ) lower [ i ] [ i ] = 1 ;
    else {
      int sum = 0 ;
      for ( int j = 0 ;
      j < i ;
      j ++ ) sum += ( lower [ k ] [ j ] * upper [ j ] [ i ] ) ;
      ;
      lower [ k ] [ i ] = ( int ) ( ( mat [ k ] [ i ] - sum ) / upper [ i ] [ i ] ) ;
      ;
    }
    ;
  }
  ;
  cout << "Lower Triangular\t\tUpper Triangular" << endl ;
  ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) cout << lower [ i ] [ j ] << "\t" ;
    ;
    cout << "" << endl ;
    for ( int j = 0 ;
    j < n ;
    j ++ ) cout << upper [ i ] [ j ] << "\t" ;
    ;
    cout << "" << endl ;
  }
  ;
  return 0 ;
}
