int main ( ) {
  int n = 0 ;
  int a [ n ] [ n ] ;
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    if ( i % 2 == 0 ) {
      for ( int j = 0 ;
      j < n && numbers [ k ] > 0 ;
      j ++ ) {
        arr [ i ] [ j ] = k + 1 ;
        numbers [ k ] -- ;
        if ( numbers [ k ] == 0 ) {
          k ++ ;
        }
      }
    }
    else {
      for ( int j = n - 1 ;
      j >= 0 && numbers [ k ] > 0 ;
      j -- ) {
        arr [ i ] [ j ] = k + 1 ;
        numbers [ k ] -- ;
        if ( numbers [ k ] == 0 ) {
          k ++ ;
        }
      }
    }
  }
  for ( int i = 0 ;
  i < n ;
  i ++ ) {
    for ( int j = 0 ;
    j < n ;
    j ++ ) {
      cout << arr [ i ] [ j ] << " " ;
    }
    cout << endl ;
  }
  return 0 ;
}
